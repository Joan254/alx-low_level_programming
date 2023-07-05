#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to be used
 *
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}

/**
 * _palindrome - checks if a string is a palindrome
 * @s: string to be checked
 * @p: position of a char in s
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */

int _palindrome(char *s, int p)
{
	if (p < 1)
	{
		return (1);
	}

	if (*s == *(s + p))
	{
		return (_palindrome(s + 1, p - 2));
	}

	return (0);
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: string to be checked
 *
 * Return: 1 if s is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	return (_palindrome(s, length - 1));
}
