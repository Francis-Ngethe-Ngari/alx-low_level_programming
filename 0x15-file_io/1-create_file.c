#include "main.h"
/**
 * create_file - function that creates
 * a file.
 *
 * @filename: name of file which will
 * be created.
 *
 * @text_content: represents the content
 * to write to file.
 *
 * Return: 1 on (success) and -1 on failure.
 *
 */
int create_file(const char *filename, char *text_content)
{
	int file_descr;
	ssize_t bytes_compose;

	if (filename == NULL)
		return (-1);

	file_descr = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file_descr == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes_compose = write(file_descr, text_content, strlen(text_content));
		if (bytes_compose == -1)
		{
			close(file_descr);
			return (-1);
		}
	}
	close(file_descr);
	return (1);
}
