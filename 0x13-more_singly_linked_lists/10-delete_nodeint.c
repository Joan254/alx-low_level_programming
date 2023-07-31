#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * index of a listint_t linked list
 * @head: pointer to the first node of the list
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;

	listint_t *current, *temp_ptr;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp_ptr = *head;
		*head = (*head)->next;
		free(temp_ptr);
		return (1);
	}

	current = *head;

	while (current != NULL && count < index - 1)
	{
		current = current->next;
		count++;
	}

	if (current == NULL || current->next == NULL)
		return (-1);

	temp_ptr = current->next;
	current->next = temp_ptr->next;
	free(temp_ptr);
	return (1);

}
