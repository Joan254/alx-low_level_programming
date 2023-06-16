#include <stdio.h>

/**
 * main - Program that prints the alphabet in lowercase, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char b;

	for (b = 'a'; b <= 'z'; b++)
	putchar(b);

	putchar('\n');
	return (0);
}
