#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to a pointer we need to set
 * @to: string to set s to
 *
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
