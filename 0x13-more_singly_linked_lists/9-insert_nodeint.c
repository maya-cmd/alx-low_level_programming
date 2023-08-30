#include "lists.h"
/**
 *insert_nodeint_at_index - Function inserts a new node at a given position
 *@head: Head of listint_t
 *@idx: Index of the list where the new node should be added
 *@n:Data to be inserted in the new node
 *
 * Return: Pointer to new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newestnode;
	listint_t *temp;
	unsigned int j;

	temp = *head;
	j = 0;

	newestnode = malloc(sizeof(listint_t));
	if (!newestnode)
		return (NULL);
	if (!*head)
		return (NULL);

	newestnode->n = n;
	newestnode->next = NULL;

	if (idx == 0)
	{
		newestnode->next = *head;
		*head = newestnode;
		return (newestnode);
	}
	while (temp && j < idx - 1)
	{
		temp = temp->next;
		j++;
	}

	if (j == idx - 1)
	{
		newestnode->next = temp->next;
		temp->next = newestnode;
		return (newestnode);

	}

	return (NULL);
}


