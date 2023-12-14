#include "main.h"
/**
 *flip_bits - Function - number of bits you would need to flip
 *to get from one number to another
 *
 *@n: Value to be used
 *@m: The second value to be used
 *
 *Return: How many bits need to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int bits_counted = 0;
	unsigned long int bit_diff;

	bit_diff = n ^ m;

	while (bit_diff)
	{
		bits_counted++;
		bit_diff &= (bit_diff - 1);
	}

	return (bits_counted);
}
