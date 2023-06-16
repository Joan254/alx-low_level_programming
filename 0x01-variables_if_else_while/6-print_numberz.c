#include <stdio.h>

/**
  * main - Program that prints numbers from 0 to 9
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}

	putchar('\n');

	return (0);
}
