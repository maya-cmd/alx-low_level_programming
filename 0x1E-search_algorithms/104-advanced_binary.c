#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * print_array - prints an array of integers
 *
 * @array: The first element pointer of the array to be printed
 * @start: The array's first element that is to printed
 * @end: The array's last element that is to printed
 */


void print_array(int *array, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array: ");
	for (i = start; i < end; i++)
	{
		printf("%d", array[i]);
		if (i < end - 1)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in a sorted array of integers
 *
 * @array: First element of the array to search for pointer.
 * @size: How many elements are in the array.
 * @value: The value to find.
 * Return: the index where value is located, or -1 on failure
 */


int binary_search(int *array, size_t size, int value)
{
	size_t midd;
	int output;

	if (array == NULL || size == 0)
		return (-1);

	print_array(array, 0, size);

	midd = (size - 1) / 2;

	if (array[midd] == value)
	{
		if (midd == 0 || array[midd - 1] != value)
			return (midd);
		else
			return (binary_search(array, midd + 1, value));
		return (midd);
	}

	else if (array[midd] > value)
	{
		return (binary_search(array, midd, value));
	}

	else
	{
		output = binary_search(array + midd + 1, size - midd - 1, value);
		return (output == -1 ? -1 : (int)(midd + 1 + output));
	}
}

/**
 * advanced_binary - searches for a value in a sorted array of integers
 *
 * @array: First element of the array to search for pointer.
 * @size: How many elements are in the array.
 * @value: The value to find.
 * Return: the index where value is located, or -1 on failure
 */


int advanced_binary(int *array, size_t size, int value)
{
	return (binary_search(array, size, value));
}
