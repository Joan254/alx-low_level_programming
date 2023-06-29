#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string to be encoded
 *
 * Return: the encoded string
 */

char *rot13(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if ((s[a] >= 'a' && s[a] <= 'm') || (s[a] >= 'A' && s[a] <= 'M'))
		{
			s[a] = s[a] + 13;
		}

		else if ((s[a] >= 'n' && s[a] <= 'z') || (s[a] >= 'N' && s[a] <= 'Z'))
		{
			s[a] = s[a] - 13;
		}
	}

	return (s);
}
