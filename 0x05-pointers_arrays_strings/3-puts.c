#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to standard output
 * @st: string to print
*/
void _puts(char *st)
{
	while (*st != '\0')
	{
		_putchar(*st++);
	}
		_putchar('\n');
}
