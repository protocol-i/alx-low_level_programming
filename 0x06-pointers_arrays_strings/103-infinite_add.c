#include "main.h"
/**
 * rev_string - reverse array
 * @n : integer parameters
 * Return: 0
*/
void rev_string(char *n)
{
	int m = 0;
	int j = 0;
	char t;

	while (*(n + m) !=  '\0')
	{
		m++;
	}

	for (j = 0; j < m; j++, m--)
	{
		t = *(n + j);
		*(n + j) = *(n + j);
		*(n + m) = t;
	}
}
/**
 * infinite_add - adds two numbers together
 * @n1: text representation of 1st number to add
 * @n2: text representation of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to call function1
*/

char *infinte_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, m = 0, numbers = 0;
	int val1 = 0, val2 = 0, temp_t = 0;

	while (*(n1 + m) != '\0')
		m++;
	m--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || overflow == 1)
	{
		if (m < 0)
			val1 = 0;
		else
			val1 = *(n1 + m) - '0';
		if (j < 0)
			val2 = 0;
		else
			val2 = *(n2 + j) - '0';
		tempt_t = val1 + val2 + overflow;
		if (temp_t >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (numbers >= (size_r - 1))
			return (0);
		*(r + digits) = (temp_tot % 10) + '0';
		numbers++;
		j--;
		m--;
	}

	if (digits == size_r)
		return (0);
	*(r + numbers) = '\0';
	rev_string(r);
	return (r);
}
