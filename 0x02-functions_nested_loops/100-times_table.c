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

	if (n >= 0 && n <= 14)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				product = a * b;
				if (product > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((product / 100) + '0');
					_putchar(((product / 10) % 10) + '0');
					_putchar((product % 10) + '0');
				}
				else if (product > 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(((product / 10) % 10) + '0');
					_putchar((product % 10) + '0');
				}
				else
				{
					if (b != 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(product + '0');
				}
			}
			_putchar('\n');
		}
	}
}
