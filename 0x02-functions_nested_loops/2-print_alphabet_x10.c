#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char rk;
	int p;

	p = 0;
	while (p < 10)
	{
		rk = 'a';
		while (rk <= 'z')
		{
			_putchar(rk);
			rk++;
		}
		_putchar('\n');
		p++;
	}
}
