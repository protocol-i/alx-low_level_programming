#include "main.h"
/**
 * flip_bits - Calculates number of bits needed to flip between two numbers.
 * @n: First unsigned long integer.
 * @m: Second unsigned long integer.
 *
 * Return: Number of bits that need to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result > 0)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}

	return (count);
}
