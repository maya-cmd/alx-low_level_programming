#include "main.h"
/**
 *clear_bit - Function sets the value of a bit to 0 at a given index
 *@n: The value to be used
 *@index:The index, starting from 0 of the bit you want to set
 *
 *Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int remainder;
	unsigned long int j;

	j = 1;

	if (index > 64)
		return (-1);

	remainder = index;

	while (remainder > 0)
	{
		j *= 2;
		remainder--;
	}
	if ((*n >> index) & 1)
		*n -= j;

	return (1);
}


