#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string
 *
 * Return: an integer
 */

int _atoi(char *s)
{
	int counter = 0;

	unsigned int ci = 0;

	int sign = 1;

	int isd = 0;

	while (s[counter])
	{
		if (s[counter] == '-')
		{
			sign *= -1;
		}

		while (s[counter] >= '0' && s[counter] <= '9')
		{
			isd = 1;
			ci = (ci * 10) + (s[counter] - '0');
			counter++;
		}

		if (isd == 1)
		{
			break;
		}

		counter++;
	}

	ci *= sign;

	return (ci);
}
