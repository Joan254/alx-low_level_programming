#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string to be used
 *
 * Return: converted string
 */

char *cap_string(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		if ((s[a - 1] == ' ' || s[a - 1] == '\t'
		|| s[a - 1] == '\n' || s[a - 1] == ','
		|| s[a - 1] == ';' || s[a - 1] == '!'
		|| s[a - 1] == '?' || s[a - 1] == '"'
		|| s[a - 1] == '(' || s[a - 1] == ')'
		|| s[a - 1] == '{' || s[a - 1] == '}'
		|| s[a - 1] == '.') && (s[a] >= 'a' && s[a] <= 'z'))
		{
			s[a] = s[a] - ('a' - 'A');
		}

		else if ((s[0] >= 'a' && s[0] <= 'z'))
		{
			s[0] = s[0] - ('a' - 'A');
		}

		else
		{
			s[a] = s[a];
		}

		a++;
	}

	return (s);
}
