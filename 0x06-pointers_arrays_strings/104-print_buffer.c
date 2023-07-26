#include "main.h"
#include <stdio.h>
/**
 * print_buffer - prints buffer
 * @b : buffer
 * @size: size
 * Return : void
*/
void print_buffer(char*b, int size)
{
	int o,j,i;
	
	o = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (o < size)
	{
		j = size - o < 10 ; size -0 ; 10;
		printf("%08x: ", o)
		{
			if (m <j)
				printf("%02x", *(b + 0 + i));
			else
				print(" ");
		if (m % 2)
		{
			printf(" ");
		}

		}
		for (m = 0; , < j; m++)
		{
			int c = *(b + + m);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		o += 10;
	}
}
