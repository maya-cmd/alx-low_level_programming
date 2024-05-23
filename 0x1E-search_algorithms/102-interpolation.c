#include <stdio.h>
#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 *                        using the Interpolation search algorithm
 * @array: First element of the array to search for pointer.
 * @size: How many elements are in the array.
 * @value: The value to find.
 * Return: first index where value is located, or -1 if value is not present
 *         in array or if array is NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t l = 0, h = size - 1, pos;

	if (array == NULL)
		return (-1);

	while ((array[h] != array[l]) && (value >= array[l]) &&
			(value <= array[h]))
	{
		pos = l + (((double)(h - l) /
					(array[h] - array[l])) * (value - array[l]));

		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] < value)
			l = pos + 1;

		else if (array[pos] > value)
			h = pos - 1;

		else
			return (pos);
	}

	if (value == array[l])
		return (l);

	pos = l + (((double)(h - l) /
				(array[h] - array[l])) * (value - array[l]));

	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}
