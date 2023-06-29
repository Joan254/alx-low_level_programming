#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to be encoded
 *
 * Return: the encoded string
 */

char *leet(char *s)
{
	int a, b;

	char l[] = "aAeEoOtTlL";

	char leet_l[] = "4433007711";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; l[b] != '\0'; b++)
		{
			if (s[a] == l[b])
			{
				s[a] = leet_l[b];
				break;
			}
		}
	}

	return (s);
}
