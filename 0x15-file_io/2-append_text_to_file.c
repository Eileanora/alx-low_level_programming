#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, written, length = 0;

	/* check if filename is NULL */
	if (filename == NULL)
		return (-1);

	/* open file with rw------- permissions if it doesn't exist */
	file_descriptor = open(filename, O_WRONLY | O_APPEND);

	/* failed to open file */
	if (file_descriptor < 0)
		return (-1);

	/* check if text_content is NULL */
	if (text_content != NULL)
	{
		while (text_content[length])
			length++;
		written = write(file_descriptor, text_content, length);

		/* failed to write to file */
		if (written < 0)
			return (-1);
	}

	close(file_descriptor);
	return (1);
}
