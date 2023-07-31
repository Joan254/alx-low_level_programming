#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n)
 * @head: double pointer to the first element of the list
 *
 * Return: the head node’s data (n) or 0 if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	int data;

	listint_t *temp_ptr;

	if (*head == NULL)
		return (0);

	data = (*head)->n;
	temp_ptr = *head;
	*head = (*head)->next;
	free(temp_ptr);

	return (data);
}
