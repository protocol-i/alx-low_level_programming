#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int j = 0;
	char *strg, *sep = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[j])
		{
			switch (format[j])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case 's':
					strg = va_arg(list, char *);
					if (!strg)
						strg = "(nil)";
					printf("%s%s", sep, strg);
					break;
				default:
					j++;
					continue;
			}
			sep = ", ";
			j++;
		}
	}

	printf("\n");
	va_end(list);
}
