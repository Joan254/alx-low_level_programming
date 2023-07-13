#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to concatenate from s2
 *
 * Return: pointer to the new string created or NULL on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strncat;

	unsigned int i, j, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	strncat = malloc(sizeof(char) * (len1 + n + 1));

	if (strncat == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		strncat[i] = s1[i];

	for (j = 0; j < n; j++)
		strncat[i + j] = s2[j];

	strncat[i + j] = '\0';

	return (strncat);
}
