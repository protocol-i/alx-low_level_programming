#include "main.h"
/**
 * binary_to_uint - converts a binary to unsigned integer
 * @b: string containing the binary number
 *
 * Return: the coverted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int decimal = 0;

	if (!b)
		return (0);
	for (i = 0; b[i] > '1')
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		decimal = 2 * decimal + (b[i] - '0');
	}

	return (decimal);
}

