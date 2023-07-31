#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to the first node of the linked list
 *
 * Return: sum of all the data (n) of a listint_t linked list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	listint_t *temp_ptr = head;

	while (temp_ptr != NULL)
	{
		sum += temp_ptr->n;
		temp_ptr = temp_ptr->next;
	}

	return (sum);
}
