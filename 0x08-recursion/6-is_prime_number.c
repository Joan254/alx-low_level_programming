#include "main.h"

/**
 * _prime - checks if a number is prime
 * @n: the number
 * @a: iterator
 *
 * Return: 1 if n is a prime number 0 otherwise
 */

int _prime(int n, int a)
{
	if (a == 1)
	{
		return (1);
	}

	if (n % a == 0 && a > 0)
	{
		return (0);
	}

	return (_prime(n, a - 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0
 * @n: the number
 *
 * Return: 1 if n is a prime number 0 otherwise
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}

	return (_prime(n, n - 1));
}
