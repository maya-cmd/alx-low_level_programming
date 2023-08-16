#include "function_pointers.h"
#include <stdlib.h>
/**
 *int_index - Function searches for an integer
 *@array:Array to search through
 *@size: Array size
 *@cmp: pointer to the function to be used to compare values
 *Return: Returns the index of the first element
 *for which the cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int n = 0;

	if (array && cmp)
	{
		while (n < size)
		{
			if (cmp(array[n]) == 0)
				n++;
			else
				return (n);
		}
	}

	return (-1);
}

