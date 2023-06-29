#include "main.h"
#include <stdio.h>

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
	int a, b, c;

	int sum = 0, carry = 0;

	int length1 = 0;

	int length2 = 0;

	char temp;

	while (n1[length1] != '\0')
	{
		length1++;
	}

	while (n2[length2] != '\0')
	{
		length2++;
	}

	if (length1 >= size_r || length2 >= size_r)
	{
		return (0);
	}

	a = length1 - 1;
	b = length2 - 1;
	c = 0;

	while (a >= 0 || b >= 0 || carry)
	{
		sum = carry;

		if (a >= 0)
			sum += n1[a--] - '0';
		if (b >= 0)
			sum += n2[b--] - '0';

		carry = sum / 10;
		r[c++] = sum % 10 + '0';
	}
	
	for (a = 0, b = c - 1; a < b; a++, b--)
	{
		temp = r[a];

		r[a] = r[b];

		r[b] = temp;

	}
	r[c] = '\0';

	return (r);
}
