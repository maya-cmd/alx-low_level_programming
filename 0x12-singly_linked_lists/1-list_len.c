#include "lists.h"
/**
 *list_len - Function number of elements in a linked
 *@h: Pointer to list_t
 *
 *Return: Number of elements
 */

size_t list_len(const list_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}
	return (number);
}
