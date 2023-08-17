#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 *print_numbers - Function prints numbers
 *@separator: String printed between integers
 *@n: Number of integers
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pn;
	unsigned int j, number;

	va_start(pn, n);

	for (j = 0; j < n; j++)
	{
		number = va_arg(pn, int);

		if (!separator || j == 0)
		{
			printf("%d", number);
		}
		else
		{
			printf("%s%d", separator, number);
		}
	}

	va_end(pn);

	printf("\n");
}



