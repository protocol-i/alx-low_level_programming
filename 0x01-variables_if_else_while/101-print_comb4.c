#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: 0
 */
int main(void)
{
	int n, p, r;

	for (n = 48; n < 58; n++)
	{
		for (p = 49; p < 58; p++)
		{
			for (r = 50; r < 58; r++)
			{
				if (r > p && p > n)
				{
					putchar(n);
					putchar(p);
					putchar(r);
					if (n != 55 || p != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
