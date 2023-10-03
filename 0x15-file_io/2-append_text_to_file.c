#include "main.h"
/**
 * append_text_to_file - function that appends
 * text to file.
 *
 * @filename: actual name of a file.
 * @text_content: content to be added at
 * the end of file.
 *
 * Return: 1 on success and -1 on failure.
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descr;
	ssize_t bytes_compose;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	file_descr = open(filename, O_WRONLY | O_APPEND);
	if (file_descr == -1)
		return (-1);

	bytes_compose = write(file_descr, text_content, strlen(text_content));

	close(file_descr);

	if (bytes_compose == -1)
		return (-1);
	else
		return (1);
}
