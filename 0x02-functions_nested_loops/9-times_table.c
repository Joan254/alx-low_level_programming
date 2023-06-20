#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 * Return: void
 */

void times_table(void)
{
	int a;

	int b;

	int product;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			product = a * b;

			if (product <= 9)
			{
				{
					if (b > 0)
					{
						_putchar(' ');
					}
				}
				_putchar(product + '0');
			}
			else
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}

		_putchar('\n');
	}
}
