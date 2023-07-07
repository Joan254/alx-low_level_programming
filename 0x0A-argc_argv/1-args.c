#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the number of arguments of a program
 * @argc: argument count
 * @argv: one-dimensional array of strings
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void)argv;
	
	printf("%d\n", argc - 1);

	return (0);
}
