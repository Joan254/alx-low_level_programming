#include <stdio.h>

/**
  * main - Prints the first 98 fibonacci numbers
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int a;
	unsigned int b, c, next;

	b = 1;
	c = 2;

	printf("%u, %u", b, c);

	for (a = 3; a <= 98; a++)
	{
		next = b + c;
		printf(", %u", next);

		b = c;
		c = next;

	}
	printf("\n");
	return (0);
}
