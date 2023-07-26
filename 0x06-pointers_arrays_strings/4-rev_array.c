#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a : array name
 * @n : number of elements of array
 * Return: void
*/
void reverse_array(int*a, int n)
{
	int m;
	int j;

	for (m = 0; m < n--; m++)
	{
		j = a[m];
		a[m] = a[n];
		a[n] = j;
	}
}
