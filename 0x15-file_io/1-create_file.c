#include "main.h"

/**
 * create_file - creates a file
 * @filename: pointer to the name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file, w, len = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (file < 0)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
		w = write(file, text_content, len);
		if (w != len)
			return (-1);
	}

	close(file);

	return (1);
}
