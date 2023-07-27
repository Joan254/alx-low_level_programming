#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the list to be freed
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp_ptr;

	while (head != NULL)
	{
		temp_ptr = head->next;
		free(head->str);
		free(head);
		head = temp_ptr;
	}
}
