#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: string to be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	char rev = s[0];

	int length = 0;

	int a;

	while (s[length] != '\0')
	{
		length++;
	}

	for (a = 0; a < length; a++)
	{
		length--;
		rev = s[a];
		s[a] = s[length];
		s[length] = rev;
	}
}

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r:  buffer that the function will use to store the result
 * @size_r: the buffer size
 *
 * Return: a pointer to the result or 0 if the result can't be stored in r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0, a = 0, b = 0, digits = 0;

	int v1 = 0, v2 = 0, sum = 0;

	while (*(n1 + a) != '\0')
		a++;
	while (*(n2 + b) != '\0')
		b++;
	a--;
	b--;
	if (a >= size_r || b >= size_r)
		return (0);
	while (a >= 0 || b >= 0 || carry == 1)
	{
		if (a < 0)
			v1 = 0;
		else
			v1 = *(n1 + a) - '0';
		if (b < 0)
			v2 = 0;
		else
			v2 = *(n2 + b) - '0';
		sum = v1 + v2 + carry;
		if (sum >= 10)
			carry = 1;
		else
			carry = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (sum % 10) + '0';
		digits++;
		b--;
		a--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}
