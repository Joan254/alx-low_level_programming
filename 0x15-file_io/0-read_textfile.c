#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to the filename
 * @letters: number of letters the function should read and print
 *
 * Return: the actual number of letters the function could read and print,
 * if the file can not be opened or read, return 0,
 * if filename is NULL return 0,
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, r, w;

	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);

	if (buff == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	r = read(file, buff, letters);
	w = write(STDOUT_FILENO, buff, r);

	if (file == -1 || r == -1 || w == -1 || w != r)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(file);

	return (w);
}
