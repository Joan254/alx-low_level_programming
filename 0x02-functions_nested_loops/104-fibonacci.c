#include <stdio.h>

/**
  * main - Prints the first 98 fibonacci numbers
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int a = 0;
	unsigned long b = 1, c = 2;

	while (a < 98)
	{
		if (a == 0)
			printf("%lu", b);
		else if (a == 1)
			printf(", %lu", c);
		else
		{
			c += b;
			b = c - b;
			printf(", %lu", c);
		}

		++a;
	}

	printf("\n");
	return (0);
}
