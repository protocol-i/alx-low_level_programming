#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int m, j;

		for (m = 0; m < n; m++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == m)
					_putchar('\\');
				else if (j < m)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
