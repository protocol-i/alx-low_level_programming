#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: First integer to swap
 * @b: Second integer to swap
*/
void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
