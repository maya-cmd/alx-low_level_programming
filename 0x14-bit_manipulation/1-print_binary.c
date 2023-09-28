#include "main.h"
#include <stdio.h>
/**
 *print_binary - Function outputs how a number can be represented using
 *binary
 *@n: Decimal number used here
 */
void print_binary(unsigned long int n)
{
	unsigned long int buff;
	int shift;

	if (n == 0)
	{
		printf("0");
		return;
	}

	buff = n;
	shift = 0;

	while ((buff >>= 1) > 0)
	{
		shift++;
	}

	while (shift >= 0)
	{
		if ((n >> shift) & 1)
		{
			printf("1");
		}
		else
		{
			printf("0");
			shift--;
		}
	}


}


