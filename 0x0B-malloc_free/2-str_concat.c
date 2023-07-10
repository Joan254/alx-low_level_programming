#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the new string created or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;

	unsigned int i, j, len1, len2;

	len1 = 0;

	len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	s3 = malloc(sizeof(char) * (len1 + len2 + 1));

	if (s3 == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		s3[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		s3[i + j] = s2[j];
	}

	s3[i + j] = '\0';

	return (s3);
}
