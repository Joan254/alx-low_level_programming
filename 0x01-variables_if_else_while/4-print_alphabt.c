#include <stdio.h>

/**
  * main - Program that prints the alphabet in lowercase except q and e
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	char b;

	for (b = 'a'; b <= 'z'; b++)
	{
		if (b != 'e' && b != 'q')
		{
			putchar(b);
		}
	}

	putchar('\n');

	return (0);
}

