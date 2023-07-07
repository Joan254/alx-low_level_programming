#include <stdlib.h>
#include <stdio.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: one-dimentional array of strings
 *
 * Return: 0 if the program receives digit symbols 1 if it does not
 */

int main(int argc, char *argv[])
{
	int i;

	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (*argv[i] < '0' || *argv[i] > '9')
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
