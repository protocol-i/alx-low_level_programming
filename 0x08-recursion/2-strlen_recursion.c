#include "main.h"
/**
 * _strlen_recursion - Returns the leangth of a given string
 * @s: The string to be measured.
 * Return: Length of the string
 */
int _strlen_recursion(char *s)
{
	int lengths = 0;

	if (*s)
	{
		lengths++;
		lengths += _strlen_recursion(s + 1);
	}

	return (lengths);
}
