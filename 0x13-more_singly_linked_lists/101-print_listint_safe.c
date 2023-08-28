#include "lists.h"
#include <stdio.h>

size_t loop_length(const listint_t *node);

/**
 * loop_length - Counts the length of a loop in a looped listint_t linked list.
 * @node: A pointer to a node where the loop is detected.
 *
 * Return: The length of the loop.
 */
size_t loop_length(const listint_t *node)
{
	const listint_t *tortoise = node;
	size_t length = 1;

	while (tortoise->next != node)
	{
		length++;
		tortoise = tortoise->next;
	}

	return (length);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = loop_length(head);

	if (nodes == 0)
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			nodes++;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
