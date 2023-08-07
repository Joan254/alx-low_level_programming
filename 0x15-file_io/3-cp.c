#include "main.h"

/**
 * main - copies the contents of a file to another file
 * @argc: argument count
 * @argv: array of strings
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to, r, close_fdf, close_fdt;
	char buffer[BUF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((r = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		if (fd_to < 0 || write(fd_to, buffer, r) != r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_from);
			exit(99);
		}
	}
	if (r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	close_fdf = close(fd_from);
	close_fdt = close(fd_to);
	if (close_fdf < 0 || close_fdt < 0)
	{
		if (close_fdf < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		if (close_fdt < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
