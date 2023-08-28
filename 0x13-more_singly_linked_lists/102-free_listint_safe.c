#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @head: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **head)
{
	size_t elements_freed = 0;
	int diff;
	listint_t *current;

	if (!head || !*head)
		return (0);

	while (*head)
	{
		diff = *head - (*head)->next;
		if (diff > 0)
		{
			current = (*head)->next;
			free(*head);
			*head = current;
			elements_freed++;
		}
		else
		{
			free(*head);
			*head = NULL;
			elements_freed++;
			break;
		}
	}

	*head = NULL;

	return (elements_freed);
}
