#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: The first element of the array to search in pointer
 * @size: How many elements are in the array
 * @value: value to find
 * Return: index where value is located or -1 if not found
 */


int binary_search(int *array, size_t size, int value)
{
	size_t i, l, r;

	if (array == NULL)
		return (-1);

	l = 0;
	r = size - 1;

	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i < r; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = l + (r - l) / 2;

		if (array[i] == value)
			return (i);
		if (array[i] < value)
			l = i + 1;
		else
			r = i - 1;
	}
	return (-1);
}
