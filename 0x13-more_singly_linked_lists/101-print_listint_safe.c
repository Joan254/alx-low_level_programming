#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the first node of the list
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0, current_p;

	const listint_t *temp_ptr = NULL;

	const listint_t *comparison_ptr = NULL;

	temp_ptr = head;

	while (temp_ptr != NULL)
	{
		printf("[%p] %d\n", (void *)temp_ptr, temp_ptr->n);
		count++;
		temp_ptr = temp_ptr->next;

		comparison_ptr = head;
		current_p = 0;

		while (current_p < count)
		{
			if (temp_ptr == comparison_ptr)
			{
				printf("-> [%p] %d\n", (void *)temp_ptr, temp_ptr->n);
				return (count);
			}
			comparison_ptr = comparison_ptr->next;
			current_p++;
		}

		if (head == NULL)
			exit(98);
	}

	return (count);
}
