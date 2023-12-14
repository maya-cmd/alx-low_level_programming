#include "main.h"
#include <stddef.h>

/**
 *binary_to_uint - The function changes a binary number to an usnsigned int
 *
 *@b: This is the string to be turned  into unsigned int
 *Return: the converted number, or 0 if there is one or
 *more chars in the string b that is not 0 or 1 b is NULL
 *
 */
unsigned int binary_to_uint(const char *b)
{
	int k;
	unsigned int counted_res;

	counted_res = 0;

	if (b == NULL)
		return (0);
	for (k = 0; b[k]; k++)
	{
		if (b[k] != '0' && b[k] != '1')
		{
			return (0);
		}

		counted_res = (counted_res << 1) + (b[k] - '0');
	}
	return (counted_res);
}

