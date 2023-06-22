#include "main.h"

/**
 * _isupper - checks for alphabetic character
 * @c: the character checked
 * Return: 1 for uppercase and 0 for lowercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
