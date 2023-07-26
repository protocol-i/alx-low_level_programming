#include "main.h"
/**
 * _strncat - concatenates two strings
 * using at most n bytes from src
 * @dest : first input value
 * @src : second input value
 * @n : byte input value
 * Return: dest.#include "main.h"
*/
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}
