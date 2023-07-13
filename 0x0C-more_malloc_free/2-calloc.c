#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * and sets the allocated memory to 0
 * @nmemb: number of elements in an array
 * @size: size of elements of the array
 *
 * Return: pointer to the allocated memory or NULL if it fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	char *charPtr;

	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	charPtr = ptr;

	for (i = 0; i < (nmemb * size); i++)
	{
		charPtr[i] = 0;
	}

	return (ptr);
}
