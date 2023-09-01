#include "main.h"
#include <stdio.h>
/**
 *print_binary - Function  prints the binary representation of a number.
 *@n: The decimal number to be used
 *
 */
void print_binary(unsigned long int n)
{
	unsigned long int buffer;
	int shift;

	if (n == 0)
	{
		printf("0");
		return;
	}
	buffer = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while (buffer > 0)
	{
		if (n & buffer)
		{
			shift = 0;
			printf("1");
		}
		else if (!shift)
		{
			printf("0");
		}

		buffer >>= 1;
	}
}

