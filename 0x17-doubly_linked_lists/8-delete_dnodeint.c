#include "lists.h"

/**
 * delete_dnodeint_at_index - Function deletes node at a given position
 * in a dlistint linked list
 * @head: The head node's pointer
 * @index: The index to delete
 * Return: The address of the new node, NULL otherwise
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temporary = *head;

	if (*head == NULL)
	{
		return (-1);
	}

	for (; index != 0; index--)
	{
		if (temporary == NULL)
			return (-1);
		temporary = temporary->next;
	}

	if (temporary == *head)
	{
		*head = temporary->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
	}
	else
	{
		temporary->prev->next = temporary->next;
		if (temporary->next != NULL)
		{
			temporary->next->prev = temporary->prev;
		}
	}
	free(temporary);
	return (1);
}
