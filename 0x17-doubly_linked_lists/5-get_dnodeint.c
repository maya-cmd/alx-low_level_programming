#include "lists.h"

/**
 * get_dnodeint_at_index - Function finds node at nth index of list
 * @head: The head node pointer
 * @index: index where node is
 * Return:  The nth node
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int j = 0;

	while (head)
	{
		if (j == index)
		{
			return (head);
		}
		head = head->next;
		j++;
	}
	return (NULL);
}
