#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with
 * a call to malloc: malloc(old_size)
 * @old_size: size in bytes of the allocated space for ptr
 * @new_size: new size in bytes of the new memory block
 *
 * Return: pointer to the new memory block, NULL or ptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;

	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
	}
	if (new_size > old_size && (ptr != NULL))
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (new_ptr);
		for (i = 0; i < old_size; i++)
			new_ptr[i] = *((char *)ptr + 1);
		free(ptr);
	}

	return (new_ptr);
}
