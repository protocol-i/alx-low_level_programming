#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; r++)
		{
			if (*s == accept[k])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
