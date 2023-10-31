#include "main.h"

/**
 * read_textfile - function that reads a
 * text file and prints it to the POSIX
 * standard output.
 *
 * @filename: The actual name of file to be
 * passed to the function.
 *
 * @letters:represents the number of
 * letters and the function should read
 * and write.
 *
 * Return: actual number of letters it could
 * read and print.
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descr;
	char *buff;
	ssize_t bytes_scan;
	ssize_t bytes_compose;

	if (filename == NULL)
		return (0);

	file_descr = open(filename, O_RDONLY);
	if (file_descr == -1)
		return (0);

	buff = (char *)malloc(letters);
	if (buff == NULL)
	{
		close(file_descr);
		return (0);
	}

	bytes_scan = read(file_descr, buff, letters);
	if (bytes_scan <= 0)
	{
		close(file_descr);
		free(buff);
		return (0);
	}

	bytes_compose = write(STDOUT_FILENO, buff, bytes_scan);
	if (bytes_compose != bytes_scan)
	{
		close(file_descr);
		free(buff);
		return (0);
	}

	close(file_descr);
	free(buff);
	return (bytes_compose);
}
