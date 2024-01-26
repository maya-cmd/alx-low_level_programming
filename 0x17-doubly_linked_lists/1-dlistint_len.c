#include "lists.h"

/**
 * dlistint_len - function returns the number of elements
 * in a dlistint_t list.
 * @h: This is a pointer to head node
 * Return: number of nodes found in a doubly linked list
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		h = h->next;
		node_count++;
	}
	return (node_count);
}
