#include "main.h"

/**
 * exit_with_err- Function to print error message and exit
 * with status code 98
 *
 * @msg: pointer to const char character array which stores
 * the error.
 *
 * Return: Nothing.
 *
 */
void exit_with_err(const char *msg)
{
	fprintf(stderr, "%s\n", msg);
	exit(98);
}

/**
 * output_elf_hedr- Function to display ELF header information
 *
 * @hedr: pointer to string to rep type of architecture:
 * 64-bit.
 *
 * Return: Nothing.
 *
 */
void output_elf_hedr(Elf32_Ehdr *hedr);

void output_elf_hedr(Elf32_Ehdr *hedr)
{
	int itr = 0;

	printf("ELF Header:\n");

	/*Display the Magic*/
	printf("  Magic:   ");
	while (itr < 16)
	{
		printf("%02x ", hedr->e_ident[itr]);
		itr++;
	}
	printf("\n");

	/*Display Class*/
	printf("  Class:%s\n", hedr->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");

	/*Display Data*/
	printf("  Data:%s\n", hedr->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");

	/*Display Version*/
	printf("  Version:%d (current)\n", hedr->e_ident[EI_VERSION]);

	/*Display OS/ABI*/
	printf("OS/ABI%s\n", hedr->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "Other");

	/*Display ABI Version*/
	printf("  ABI Version:%d\n", hedr->e_ident[EI_ABIVERSION]);

	/*Display Type*/
	printf("Type:%s\n", hedr->e_type == ET_EXEC ? "EXEC (Executable file)" : "Other");

	/*Display Entry point address*/
	printf("  Entry point address:0x%x\n", hedr->e_entry);
}

/**
 * main- Entry point of function, execution begins here.
 *
 * @argc: represent arguement counter.
 * @argv: represents arguement vector.
 *
 * Return: 0 to show success.
 *
 */

int main(int argc, char *argv[])
{
	const char *filename;
	int fd;
	Elf32_Ehdr hedr;

	if (argc != 2)
		exit_with_err("Usage: elf_header elf_filename");

	filename = argv[1];
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		exit_with_err("Error opening file");

	/*Read the ELF header*/
	if (read(fd, &hedr, sizeof(hedr)) != sizeof(hedr))
		exit_with_err("Error reading ELF header");

	/*Check if it's a valid ELF file*/
	if (memcmp(hedr.e_ident, ELFMAG, SELFMAG) != 0)
		exit_with_err("Not an ELF file");

	/*Display the ELF header information*/
	printf("ELF Header:\n");
	output_elf_hedr(&hedr);

	close(fd);
	return (0);
}
