#include "lists.h"
/**
 *pop_listint - Function deletes the head node of a listint_t
 *@head: Head of listint_t
 *
 *Return: The head node’s data (n).
 *
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int count;

	if (!head)
		return (0);
	if (!*head)
		return (0);

	temp = *head;

	count = temp->n;

	*head = (*head)->next;

	free(temp);

	return (count);
}


