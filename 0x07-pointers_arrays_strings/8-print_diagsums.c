#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of
 * a square matrix of integers
 * @a: square matrix
 * @size: size of the matrix
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int j;

	unsigned int sum1, sum2;

	sum1 = 0;

	sum2 = 0;

	for (j = 0; j < size; j++)
	{
		sum1 += a[(size * j) + j];
		sum2 += a[(size * (j + 1)) - (j + 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
