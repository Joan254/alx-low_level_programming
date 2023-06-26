#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: string to be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	char rev = s[0];

	int length = 0;

	int a;

	while (s[length] != '\0')
	{
		length++;
	}

	for (a = 0; a < length; a++)
	{
		length--;
		rev = s[a];
		s[a] = s[length];
		s[length] = rev;
	}
}
