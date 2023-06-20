#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: the number to be used
 *
 * Return: number matrix
 */

void print_times_table(int n)
{
	int a, b, product;

	if (n < 0 || n > 15)
	{
		return;
	}
	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			product = a * b;

			if (product <= 9)
			{
				if (b > 0)
				{
					_putchar(' ');
				}
				_putchar(product + '0');
			}
			else if (product <= 99)
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			else
			{
				_putchar((product / 100) + '0');
				_putchar(((product / 10) % 10) + '0');
				_putchar((product % 10) + '0');
			}

			if (b < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
