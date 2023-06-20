#include "main.h"
#include <stdio.h>

/**
  * print_to_98 - Prints all natural numbers from n to 98
  * @n: The number to start printing from
  *
  * Return: Always 0 (Success)
  */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);

			if (n < 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);

			if (n > 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
}
