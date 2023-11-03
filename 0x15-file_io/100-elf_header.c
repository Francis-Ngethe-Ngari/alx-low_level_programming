#include "main.h"

/**
 * ext_err- Function prints an exit msg and exit program
 * with a specif exit code.
 *
 * @msg: Pointer to character array (String) this the error
 * message displayed in standard output.
 *
 * Return: Nothing.
 *
 */

void ext_err(const char *msg)
{
	fprintf(stderr, "%s\n", msg);
	exit(98);
}

/**
 * main- Starting point of program execution.
 *
 * @argc: param of type int which keeps track of
 * number of arguements passed in command-line.
 *
 * @argv: Pointer to char array (String); in this
 * case a file type of ELF.
 *
 * Return: Always 0 (Success).
 *
 */

/** Function Signature**/
int main(int argc, char *argv[]);

int main(int argc, char *argv[])
{
	const char *elf_file;
	int fd;
	Elf64_Ehdr elf_hedr;
	off_t elf_hedr_ofset;
	ssize_t bytes_scan;
	int itr;

	if (argc != 2)
		ext_err("Usage: elf_demo ELF_file");

	elf_file = argv[1];

	fd = open(elf_file, O_RDONLY);
	if (fd == -1)
		ext_err("Error: can't open the ELF file.");

	elf_hedr_ofset = lseek(fd, 0, SEEK_SET);
	if (elf_hedr_ofset == (off_t) - 1)
		ext_err("Error: can't move elf_header using lseek");

	bytes_scan = read(fd, &elf_hedr, sizeof(Elf64_Ehdr));

	if (bytes_scan == -1)
		ext_err("Error: can't read from ELF file.");

	if (bytes_scan != sizeof(Elf64_Ehdr))
		ext_err("Error: File is not a valid ELF file.");

	if (memcmp(elf_hedr.e_ident, ELFMAG, SELFMAG) != 0)
		ext_err("Error: File is not a valid ELF file.");

	printf("ELF Header:\n");
	printf("  Magic:  ");

	itr = 0;
	while (itr < EI_NIDENT)
	{
		printf("%02X ", elf_hedr.e_ident[itr]);
		itr++;
	}
	printf("\n");
	printf("  Class:                             %s\n", (elf_hedr.e_ident[EI_CLASS] == ELFCLASS32) ? "ELF32" : "ELF64");
	printf("  Data:                              %s\n", (elf_hedr.e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "Unknown data format");
	printf("  Version:                           %d (current)\n", elf_hedr.e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %d\n", elf_hedr.e_ident[EI_OSABI]);
	printf("  ABI Version:                       %d\n", elf_hedr.e_ident[EI_ABIVERSION]);
	printf("  Type:                              %u (EXEC)\n", elf_hedr.e_type);
	printf("  Machine:                           %u\n", elf_hedr.e_machine);
	printf("  Version:                           0x%08X\n", elf_hedr.e_version);
	printf("  Entry point address:               0x%016lX\n", elf_hedr.e_entry);

	close(fd);
	return (0);
}
