#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: the number to be computed
 * Return: Absolute value of the number
 */

int _abs(int n)
{
	if (n < 0)
	{
		int abs_val;

		abs_val = n * -1;

		return (abs_val);
	}

	return (n);
}
