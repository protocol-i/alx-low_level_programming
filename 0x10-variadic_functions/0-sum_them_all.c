#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Returns the sum of all parameters
 * @n: the number of parameters passed to the function
 * @...: variadic number of parameters to calculate the sum of parameters
 * return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int m, sum = 0;

	va_start(ap, n);

	for (m = 0; m < n; m++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
