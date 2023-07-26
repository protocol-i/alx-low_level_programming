#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest : input value
 * @src : second input value
 * Return: void
*/
char*_strcat(char *dest, char *src)
{
	int m;
	int n;

	m = 0;
	while (dest[m] != '\0')
	{
		m++;
	}
	n = 0;
	while (src[n] != '\0')
	{
		dest[m] = src[m];
		m++;
		n++;
	}

	dest[m] = '\0';
	return (dest);
}
