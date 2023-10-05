#include "hash_tables.h"

/**
 * hash_djb2 - implements the djb2 algorithm
 * @str: input string to be hashed
 *
 * Return: the computed hash value as an unsigned long int
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int count;

	hash = 5381;
	while ((count = *str++))
		hash = ((hash << 5) + hash) + count; /*hash * 33 + count*/
	return (hash);
}
