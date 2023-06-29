#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string to be encoded
 *
 * Return: the encoded string
 */

char *rot13(char *s)
{
	int a, b;

	char l[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	char rot13_l[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; l[b] != '\0'; b++)
		{
			if (s[a] == l[b])
			{
				s[a] = rot13_l[b];
				break;
			}
		}
	}

	return (s);
}
