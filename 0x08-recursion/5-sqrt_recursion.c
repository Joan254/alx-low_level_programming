#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to use
 *
 * Return: square root of the number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (_sqrt(n, 0));
}

/**
 * _sqrt - finds square root of a number
 * @n: the number
 * @a: iterator
 *
 * Return: square root
 */

int _sqrt(int n, int a)
{
	if (a * a > n)
	{
		return (-1);
	}

	if (a * a == n)
	{
		return (a);
	}

	return (_sqrt(n, a + 1));
}
