#include "lists.h"
#include <stdio.h>
/**
 * print_list - Prints the elements of a linked list.
 * @h: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str)
		{
			size_t len = 0;

			while (h->str[len])
				len++;
			write(1, h->str, len);
		}
		else
		{
			write(1, "[0] (nil)", 9);
		}
		write(1, "\n", 1);
		count++;

		h = h->next;
	}

	return (count);
}
