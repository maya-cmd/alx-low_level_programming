#include "lists.h"
/**
 *add_nodeint_end - Adds a new node at the end of a listint_t list
 *@head: Head of listint_t
 *@n: Data to be added in the last new node
 *
 *Return: Address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newestnode;
	listint_t *temp;

	newestnode = malloc(sizeof(listint_t));

	if (!newestnode)
	{
		return (NULL);
	}
	newestnode->n = n;
	newestnode->next = NULL;

	if (*head == NULL)
	{
		*head = newestnode;
	}
	else
	{
	temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newestnode;
	}
	return (newestnode);
}
