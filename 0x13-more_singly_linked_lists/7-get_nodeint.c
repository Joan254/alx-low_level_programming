#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the first node in the linked list
 * @index: index of the node to return
 *
 * Return: the nth node of a listint_t linked list or NULL if it doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	listint_t *temp_ptr = head;

	while (temp_ptr != NULL)
	{
		if (count == index)
		{
			return (temp_ptr);
		}

		temp_ptr = temp_ptr->next;
		count++;
	}

	return (NULL);
}
