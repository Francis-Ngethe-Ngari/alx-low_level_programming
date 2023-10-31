#include "main.h"

/**
 * exit_err - function is defined
 * to print an error message with a given format
 * string and argument string, then exit the program
 * with the specified exit code.
 *
 * @exit_code: exit code the program should use
 * when exiting.
 * @f_str: represents format string for error message.
 * @Arg: represents argument string inserted to error
 * message using format string.
 *
 * Return: type void; doesn't return anything.
 *
 */

void exit_err(int exit_code, const char *f_str, const char *Arg)
{
	dprintf(STDERR_FILENO, f_str, Arg);
	exit(exit_code);
}

/**
 * main - entry point.
 *
 * @argc: no of command-line arguments
 * passed to program.
 * @argv: an array of strings containing
 * the command-line arguements.
 *
 * Return: 0 (always success).
 *
 */

/**Function Signature**/
int main(int argc, char *argv[]);

int main(int argc, char *argv[])
{
	const char *src;
	const char *dest;
	int fd_src;
	int fd_dest;
	char buff[BUFFER_SIZE];
	ssize_t bytes_scan;

	if (argc != 3)
		exit_err(97, "Usage: %s file_from file_to\n", argv[0]);

	src = argv[1];
	dest = argv[2];

	fd_src = open(src, O_RDONLY);
	if (fd_src == -1)
		exit_err(98, "Error: Can't read from file NAME_OF_THE_FILE%s\n", src);

	fd_dest = open(dest, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_dest == -1)
	{
		close(fd_src);
		exit_err(99, "Error: Can't write to NAME_OF_THE_FILE%s\n", dest);
	}

	while ((bytes_scan = read(fd_src, buff, BUFFER_SIZE)) > 0)
	{
		ssize_t bytes_compose = write(fd_dest, buff, bytes_scan);

		if ((bytes_compose) == -1)
		{
			close(fd_src);
			close(fd_dest);
			exit_err(99, "Error: Can't write to NAME_OF_THE_FILE%s\n", dest);
		}
	}

	if (bytes_scan == -1)
	{
		close(fd_src);
		close(fd_dest);
		exit_err(98, "Error: Can't read from file NAME_OF_THE_FILE%s\n", src);
	}

	if (close(fd_src) == -1)
		exit_err(100, "Error: Can't close fd FD_VALUE%d\n", (const char *)&fd_src);

	if (close(fd_dest) == -1)
		exit_err(100, "Error: Can't close fd FD_VALUE%d\n", (const char *)&fd_dest);

	return (0);
}
