#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the list to be freed
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp_ptr;

	while (head != NULL)
	{
		temp_ptr = head;
		head = head->next;
		free(temp_ptr);
	}
}
