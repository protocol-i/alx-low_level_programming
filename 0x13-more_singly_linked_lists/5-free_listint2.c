#include "lists.h"
/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *next_nod;

	if (!head)
		return;

	current = *head;

	while (current)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}

	*head = NULL;
}
