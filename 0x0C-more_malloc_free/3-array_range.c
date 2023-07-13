#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the newly created array or NULL if malloc fails,
 * NULL if min > max
 */

int *array_range(int min, int max)
{
	int *ptr;

	int i, range = 0;

	if (min > max)
		return (NULL);

	range = ((max + 1) - min);

	ptr = malloc(sizeof(int) * range);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < range; i++)
	{
		ptr[i] = min + i;
	}

	return (ptr);
}
