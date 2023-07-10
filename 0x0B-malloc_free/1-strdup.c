#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: string to be duplicated
 *
 * Return: a pointer to the duplicated string or
 * NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *duplicate;

	unsigned int i, length;

	i = 0;

	length = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[length])
	{
		length++;
	}

	duplicate = malloc(sizeof(char) * (length + 1));

	if (duplicate == NULL)
	{
		return (NULL);
	}

	while ((duplicate[i] = str[i]) != '\0')
	{
		i++;
	}

	return (duplicate);
}
