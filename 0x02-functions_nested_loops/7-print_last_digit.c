#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @k: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int k)
{
	int a;	

	if (k < 0)
		k = -k;

	a = k % 10;
		
	if (a < 0)
		a = -a;
	
	_putchar(a + '0');
	
	return (a);
		
}
