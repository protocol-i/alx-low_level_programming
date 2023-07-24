#include "main.h"
/**
 * print_rev - imprime en reversa
 * @st: string
 * return: 0
*/
void print_rev(char *st)
{
	int longi = 0;
	int o;

	while (*st != '\0')
	{
		longi++;
		st++;
	}
	st--;
	for (o = longi; o > 0; o--)
	{
		_putchar(*st);
		st--;
	}

	_putchar('\n');
}
