#include "lists.h"
/**
 *reverse_listint - Function reverses listint_t
 *@head: The head of listint_t
 *
 *Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous_node;
	listint_t *next_node;

	previous_node = NULL;
	next_node = NULL;

	while (*head)
	{
		next_node = (*head)->next;
		(*head)->next = previous_node;
		previous_node = *head;
		*head  = next_node;
	}
	*head = previous_node;
	return (*head);
}
