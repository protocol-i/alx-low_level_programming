#include "lists.h"
#include <stdio.h>

size_t get_loop_length(const listint_t *loop_node);
size_t count_unique_nodes(const listint_t *loop_node);

/**
 * get_loop_length - Counts the length of a loop in a looped linked list.
 * @loop_node: A pointer to a node where the loop is detected.
 *
 * Return: The length of the loop.
 */
size_t get_loop_length(const listint_t *loop_node)
{
	const listint_t *tortoise = loop_node;
	size_t length = 1;

	while (tortoise->next != loop_node)
	{
		length++;
		tortoise = tortoise->next;
	}

	return (length);
}

/**
 * count_unique_nodes - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @loop_node: A pointer to a node where the loop is detected.
 *
 * Return: The number of unique nodes in the loop.
 */
size_t count_unique_nodes(const listint_t *loop_node)
{
	const listint_t *tortoise = loop_node;
	size_t unique_nodes = 1;

	while (tortoise->next != loop_node)
	{
		unique_nodes++;
		tortoise = tortoise->next;
	}

	return (unique_nodes);
}

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tortoise = head, *hare = head;

	while (hare && hare->next)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;

		if (tortoise == hare)
		{
			return (count_unique_nodes(tortoise));
		}
	}

	return (0);
}
