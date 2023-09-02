#include "main.h"
/**
 *flip_bits - Function returns the number of bits you
 *would need to flip to get from one number to another
 *@n: The first number to be used
 *@m: The second number to be used
 *
 *Return: The number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int bit_count;
	unsigned long int bit_difference;

	bit_count = 0;
	bit_difference = n ^ m;

	while (bit_difference)
	{
		bit_count++;
		bit_difference &= (bit_difference - 1);
	}

	return (bit_count);
}
