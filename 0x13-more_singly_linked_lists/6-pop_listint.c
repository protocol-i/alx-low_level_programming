#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 * Return: the data inside the elements that was deleted, or 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	listint_t *next_node;
	int data;

	if (!head || !*head)
		return (0);

	data = (*head)->n;
	next_node = (*head)->next;
	free(*head);
	*head = next_head;

	return (data);
}
