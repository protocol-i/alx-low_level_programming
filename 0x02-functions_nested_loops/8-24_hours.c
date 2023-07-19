#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
*/
void jack_bauer(void)
{
	int r, k;


	r = 0;


	while (r < 24)
	{
		k = 0;
			while (k < 60)
		{
			_putchar((r / 10) + '0');
			_putchar((r % 10) + '0');
			_putchar(':');
			_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');
			_putchar('\n');
		k++;
		}
		r++;
	}
}
