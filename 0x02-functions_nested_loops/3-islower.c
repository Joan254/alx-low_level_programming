#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: the character checked
 * Return: 1 for lowercase and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
