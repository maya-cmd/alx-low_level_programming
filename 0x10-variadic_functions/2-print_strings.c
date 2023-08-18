#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 *print_strings - Function prints strings
 *@separator: Comes between strings
 *@n: The number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ps;
	unsigned int j;
	char *str;
	char *next_str;

	va_start(ps, n);


	for (j = 0; j < n; j++)
	{

		next_str = va_arg(ps, char *);
		str = next_str;
		if (!str)
		{
			str = "(nil)";
		}

		if (j == 0 && separator)
		{
			printf("%s", str);
		}
		if (!separator)
		{
			printf("%s", str);
		}
		else
		{
			printf("%s%s", separator, str);
		}
	}

	printf("\n");

	va_end(ps);
}
