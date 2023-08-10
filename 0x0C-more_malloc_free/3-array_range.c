#include <stdlib.h>
#include "main.h"
/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored 
 * Return: pointer to the new array
 */
{
	int *ptr;
	int m, magnitude;

	if (min > max)
		return (NULL);
	magnitude = max - min + 1;

	ptr = malloc(sizeof(int) *magnitude);

	if (ptr == NULL)
		return (NULL);

	for (m = 0; min <= max; m++)
		ptr[m] = min++;

	return (ptr);
}
