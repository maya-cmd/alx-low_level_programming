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

	buffer = n;
	shift = 0;

	while ((buffer >>= 1) > 0)
	{
		shift++;
	}

	while (shift >= 0)
	{
		if ((n >> shift) & 1)
		printf("1");
		else
		printf("0");

		shift--;
	}
}
