#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the first node of the list
 * @idx: index of the list where the new node should be added
 * @n: data to insert in the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;

	listint_t *new_node, *temp_ptr;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	temp_ptr = *head;

	while (temp_ptr != NULL && count < idx - 1)
	{
		temp_ptr = temp_ptr->next;
		count++;
	}

	if (temp_ptr == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = temp_ptr->next;
	temp_ptr->next = new_node;

	return (new_node);
}
