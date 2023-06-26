#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to be used
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int n = 0;

	for (; *s != '\0'; s++)
	{
		n++;
	}

	return (n);
}
