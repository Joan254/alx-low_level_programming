#include <stdio.h>

/**
 * main - Program that prints the lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char b;

	for (b = 'z'; b >= 'a'; b--)
	putchar(b);

	putchar('\n');
	return (0);
}
