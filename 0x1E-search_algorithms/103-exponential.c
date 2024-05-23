#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - perform binary search on sorted integer array
 * @array: First element of the array to search for pointer.
 * @size: How many elements are in the array.
 * @value: The value to find.
 * Return: first index where value is located, or -1 if value is absent
 * from array or if array is NULL
 */


int binary_search(int *array, size_t size, int value)
{
	size_t m, l = 0, h = size - 1, i;

	if (!array)
		return (-1);

	while (l <= h)
	{
		printf("Searching through array: ");
		for (i = l; i < h; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		m = l + (h - l) / 2;

		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			h = m - 1;
		else
			return (m);
	}
	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array of integers
 * @array: First element of the array to search for pointer.
 * @size: How many elements are in the array.
 * @value: The value to find.
 * Return: first index where value is located or -1 if not found
 */


int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, min = 0, subarray_size;
	int result;

	if (!array)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	min = bound < size ? bound : size - 1;

	printf("Value between indexes [%lu] and [%lu]\n", bound / 2, min);

	subarray_size = min < size - bound / 2 ?
		min - bound / 2 + 1 : size - bound / 2;

	result = binary_search(array + bound / 2, subarray_size, value);

	return (result != -1 ? (ssize_t)(result + bound / 2) : -1);
}
