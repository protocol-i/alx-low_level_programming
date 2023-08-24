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
		if (!h->str)
		{
			size_t len = 0;

			while (h->str[len])
				len++;
			for (size_t i = 0; i < len; i++)
				_putchar(h->str[i]);
		}
		else
		{
			char nil_msg[] = "[0] (nil)";
			for (size_t i = 0; i < sizeof(nil_msg) - 1; i++)

			_putchar(nil_msg[i]);
		}
		_putchar('\n');
		count++;

		h = h->next;
	}

	return (count);
}
