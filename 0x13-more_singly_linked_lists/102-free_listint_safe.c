#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to the first node of the list
 *
 * Return: the size of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;

	int diff;

	listint_t *temp_ptr;

	if (h == NULL || *h == NULL)
		return (0);

	while (*h != NULL)
	{
		diff = *h - (*h)->next;

		if (diff > 0)
		{
			temp_ptr = (*h)->next;
			free(*h);
			*h = temp_ptr;
			count++;
		}
		else
		{
			free(*h);
			*h = NULL;
			count++;
			break;
		}
	}

	*h = NULL;

	return (count);
}
