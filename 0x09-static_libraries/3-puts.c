#include "main.h"

/**
 * _puts - prints a string
 * @str: string to be used
 *
 * Return: void
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
