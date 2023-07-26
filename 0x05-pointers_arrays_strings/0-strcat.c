#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int m;
	int j;

	m = 0;
	while (dest[m] != '\0')
	{
		m++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[m] = src[j];
		m++;
		j++;
	}

	dest[m] = '\0';
	return (dest);
}
