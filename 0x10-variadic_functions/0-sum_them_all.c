#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: parameter count
 *
 * Return: sum of all its parameters or 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list mynumbers;

	unsigned int i;
	
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start (mynumbers, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(mynumbers, int);
	}

	va_end (mynumbers);

	return (sum);
}
