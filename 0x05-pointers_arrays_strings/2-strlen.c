#include "main.h"
/**
 * _strlen - returns the length of a string
 * @st: string
 * Returns: length
 */
int _strlen(char *st)
{
	int longi = 0;

	while (*st != '\0')
	{
		longi++;
		st++;
	}

	return (longi);
}
