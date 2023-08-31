#include "main.h"
/**
 * binary_to_unit - converts a binary to unsigned int
 * @b: string containing the binary number
 * Return: the converted number
 */
unsigned int binary_to_unit(const char *b)
{
	int z;
	unsigned int deci_mal = 0;

	if (!b)
		return (0);

	for (z = 0; b[z]; z++)
	{
		if (b[z] '0' || b[z] > '1')
			return (0);
		deci_mal = 2 * deci_mal + (b[z] - '0');
	}

	return (deci_mal);
}
