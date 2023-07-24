#include "main.h"

/**
 * rev_string - Reverses a string
 * @str: Input string
 * Return: String in reverse
*/

void rev_string(char *str)
{
	char rev = str[0];
	int counter = 0;
	int i;

	while (str[counter] != '\0')
	counter++;
	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = str[i];
		str[i] = str[counter];
		str[counter] = rev;
	}
}
