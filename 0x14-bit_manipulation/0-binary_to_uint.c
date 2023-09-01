#include "main.h"
/**
 *binary_to_uint - Function converts a binary number to an unsigned int
 *@b: The string to be converted
 *
 *Return: The converted number, or 0 if there is one or more
 *chars in the string b that is not 0 or 1 b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int result_count = 0;

	if (b == NULL)
		return (0);

	for (j = 0; b[j]; j++)
	{
		if (b[j] != '0' &&  b[j] != '1')
		{
			return (0);
		}

		result_count = (result_count << 1) + (b[j] - '0');
	}
	return (result_count);
}

