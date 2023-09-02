#include "main.h"
/**
 *set_bit - Function sets the value of a bit to 1 at a given index
 *@n: Number to be used
 *@index: The index, starting from 0 of the bit you want to set
 *
 *Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit_value;

	bit_value = 1;

	if (index > 64)
		return (-1);

	while (index > 0)
	{
		bit_value *= 2;
		index--;
	}

	*n += bit_value;

	return (1);
}


