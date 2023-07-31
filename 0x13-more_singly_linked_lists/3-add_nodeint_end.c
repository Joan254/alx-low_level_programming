#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the beginning of a listint_t list
 * @head: double pointer to the list
 * @n: new int to add in the node
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp_ptr;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	temp_ptr = *head;

	while (temp_ptr->next != NULL)
		temp_ptr = temp_ptr->next;

	temp_ptr->next = new_node;

	return (new_node);
}
