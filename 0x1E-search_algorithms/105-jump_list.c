#include <math.h>
#include <stdio.h>
#include <stddef.h>
#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted list of integers using the
 * Jump search algorithm
 * @array: The first element of the array to search for pointer.
 * @size: How many elements are in the array.
 * @value: The value to find.
 * Return: a pointer to the first node where value is located or NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, prev, i;
	listint_t *node, *node_prev;

	if (list == NULL)
		return (NULL);

	step = sqrt(size);
	prev = 0;
	node = list;

	while (node->next != NULL && node->next->n < value)
	{
		node_prev = node;
		prev = node->index;

		for (i = 0; i < step && node->next != NULL; i++)
			node = node->next;

		printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, node->index);

	while (node_prev != node->next)
	{
		printf("Value checked at index [%lu] = [%d]\n", node_prev->index, node_prev->n);

		if (node_prev->n == value)
			return (node_prev);

		node_prev = node_prev->next;
	}

	return (NULL);
}
