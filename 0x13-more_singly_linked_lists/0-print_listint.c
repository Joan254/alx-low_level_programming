#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list
 * @h: pointer to the list to be printed
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	const listint_t *temp_ptr;

	temp_ptr = h;

	while (temp_ptr != NULL)
	{
		printf("%d\n", temp_ptr->n);
		count++;
		temp_ptr = temp_ptr->next;
	}

	return (count);
}
