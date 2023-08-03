#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: one number
 * @m: another number
 *
 * Return: the number of bits you would need to flip
 * to get from one number to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	unsigned long int xor_val = n ^ m;

	while (xor_val)
	{
		count += (xor_val & 1);

		xor_val >>= 1;
	}

	return (count);
}
