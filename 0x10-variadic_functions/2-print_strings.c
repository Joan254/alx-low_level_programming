#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;

	unsigned int i;

	char *s;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i != 0)
		{
			printf("%s", separator);
		}

		s = va_arg(strings, char *);

		printf("%s", (s == NULL) ? "(nil)" : s);
	}

	printf("\n");

	va_end(strings);
}
