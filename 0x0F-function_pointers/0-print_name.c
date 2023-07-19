#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints name
 * @name: pointer to a character array (a name)
 * @f: pointer to a function that takes a char *
 * as an argument and returns nothing
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
