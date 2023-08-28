#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 * Return: the data inside the elements that was deleted, or 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *current_head, *next_node;
	int data;

	if (!head || !*head)
		return (0);

	current_head = *head;
	data = current_head->n;
	next_node = current_head->next;

	free(current_head);
	*head = next_node;

	return (data);
}
