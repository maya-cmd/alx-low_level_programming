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

	va_start(arg_list, format);
	while (format && format[j])
	{
		switch (format[j])
		{
			case 'c':
				printf("%c", va_arg(arg_list, int));
				break;
			case 'i':
				printf("%d", va_arg(arg_list, int));
				break;
			case 'f':
				printf("%f", va_arg(arg_list, double));
				break;
			case 's':
				next_str_arg = va_arg(arg_list, char *);
				if (next_str_arg == NULL)
				{
					printf("nil");
				}
				else
				{
				printf("%s", next_str_arg);
				}
				break;
			default:
				break;
		}
		if (format[j + 1])
		{
			printf(", ");
		}
		j++;
	}
	printf("\n");
	va_end(arg_list);
}
