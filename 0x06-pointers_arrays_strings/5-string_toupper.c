#include "main.h"
/**
 * string_toupper - changes all lowercase letters to uppercase
 * @n : pointer
 * Return: n
*/
char *string_toupper(char *n)
{
	int m;

	m = 0;
	while (n[m] != '\0')
	{
		if (n[m] >= 'a' && n[m] <= 'z')
			n[m] = n[m] - 32;
		m++;
	}
	return (n);
}
