#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number or 0 if there is one
 * or more chars in the string b that is not 0 or 1, b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int i;

	unsigned int result = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0' || b[i] == '1')
			result = 2 * result + (b[i] - '0');
		else
			return (0);
	}

	return (result);
}
