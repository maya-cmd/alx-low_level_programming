#include "main.h"
/**
 *clear_bit - Function sets the value of a bit to 0 at a given index
 *@n: The digit to be cleared
 *@index: Index, starting from 0 of the bit you want to set
 *
 *Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int rem;
	unsigned long int k;

	k = 1;

	if (index > 64)
	{
		return (-1);
	}

	rem = index;

	while (rem > 0)
	{
		k *= 2;
		rem--;
	}

	if ((*n >> index) & 1)
	{
		*n -= k;
	}
	return (1);
}

