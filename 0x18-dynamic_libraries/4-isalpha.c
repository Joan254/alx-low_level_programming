#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: the character checked
 * Return: 1 for alphabetic character and 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
