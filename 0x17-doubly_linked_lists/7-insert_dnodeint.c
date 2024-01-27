#include "lists.h"

/**
 * insert_dnodeint_at_index - Function inserts a new node at a given position
 * in a dlinked list
 * @h: The  head node pointer
 * @idx: The index where the node should be inserted
 * @n: The node to be inserted
 * Return: The address of the new node inserted, NULL otherwise
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temporary = *h, *new_node;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		temporary = temporary->next;
		if (temporary == NULL)
			return (NULL);
	}

	if (temporary->next == NULL)
		return (add_dnodeint_end(h, n));
	new_node = malloc(sizeof(dlistint_t));

	new_node->n = n;
	new_node->prev = temporary;
	new_node->next = temporary->next;
	temporary->next->prev = new_node;
	temporary->next = new_node;

	return (new_node);
}
