#include "lists.h"
/**
 *add_nodeint - Adds a new node at the beginning of a listint_t list
 *@head: Head of listint_t
 *@n:Data to be inserted in the new node
 *
 * Return: Newest node pointer and NULL otherwise
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newestnode;

	newestnode = malloc(sizeof(listint_t));
	if (!newestnode)
	{
		return (NULL);
	}

	newestnode->n = n;

	newestnode->next = *head;

	*head = newestnode;

	return (newestnode);
}
