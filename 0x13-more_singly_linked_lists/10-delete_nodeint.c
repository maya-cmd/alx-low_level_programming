#include "lists.h"
/**
 *delete_nodeint_at_index - Function deletes the node
 *at index index of a listint_t
 *@head: Head of listint_t
 *@index: The node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int j;
	listint_t *temp;
	listint_t *node_to_delete = NULL;

	temp = *head;
	j = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (j = 0; j < index - 1 && temp != NULL; j++)
	{
		temp = temp->next;
	}

	if (!temp || !(temp->next))
		return (-1);

	node_to_delete = temp->next;
	temp->next = node_to_delete->next;
	free(node_to_delete);

	return (1);
}
