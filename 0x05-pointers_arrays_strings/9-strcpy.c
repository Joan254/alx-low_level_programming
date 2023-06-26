#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: destination
 * @src: source
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int b;

	for (b = 0; src[b] != '\0'; b++)
	{
		dest[b] = src[b];
	}

	dest[b++] = '\0';

	return (dest);
}
