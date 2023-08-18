#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *print_all -Function prints anything
 *@format: A list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list arg_list;
	unsigned int j = 0;
	char *next_str_arg;
	char *separator = "";

	va_start(arg_list, format);
	if (format)
	{
		while (format[j])
		{
			switch (format[j])
			{
				case 'c':
					printf("%s%c", separator, va_arg(arg_list, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(arg_list, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(arg_list, double));
					break;
				case 's':
					next_str_arg = va_arg(arg_list, char *);
					if (next_str_arg == NULL)
					{
						printf("%snil", separator);
					}
					printf("%s%s", separator, next_str_arg);
					break;
				default:
					j++;
					continue;
			}
			separator = ", ";
			j++;
		}
	}
	printf("\n");
	va_end(arg_list);
}
