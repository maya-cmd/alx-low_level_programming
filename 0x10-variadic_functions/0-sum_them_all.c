#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *sum_them_all - Function finds sum of all it's parameters
 *@n: Number of parameters
 *
 *Return: The sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list lst;
	unsigned int i, sum = 0;

	va_start(lst, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(lst, int);
	}
	if (n == 0)
		return (0);
	va_end(lst);
	return (sum);
}
