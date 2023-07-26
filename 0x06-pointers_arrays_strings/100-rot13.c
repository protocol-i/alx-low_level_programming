#include "main.h"
#include <stdio.h>
/**
 * rot13 - encoder rot13
 * @s: pointer to string parameters
 * Return: *s
*/
char *rot13(char *s)
{
	int m;
	int j;
	char data1[] = "ABCDEFGHIJKLMNOPQRLSUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[m] != '\0'; m++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[m] == data1[j])
			{
				s[m] = datarot[j];

				break;
			}
		}
	}
	return (s);
}
