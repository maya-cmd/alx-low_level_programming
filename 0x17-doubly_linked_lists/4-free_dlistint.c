#include "lists.h"

/**
 * free_dlistint - Function frees a dlistint_t list.
 * @head: This is the head node
 * Returns: A list that is freed
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *temporary;

	current = head;

	while (current != NULL)
	{
		temporary = current->next;
		free(current);
		current = temporary;
	}
}
