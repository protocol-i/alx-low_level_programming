#inlude "main.h"
/**
 * _puts_recursion - function prints a string on a new line
 * @s: input
 * Return: 0
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	_puts_recursion(s + 1);
}

else

_putchar('\n');
}
