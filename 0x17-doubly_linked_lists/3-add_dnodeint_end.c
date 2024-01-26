#include "lists.h"

/**
 * add_dnodeint_end -Function adds a  node at end of list
 *
 * @head: pointer to head node
 * @n: node to be added at the end of list
 * Return: address of the new added node
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temporary;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		perror("Memory allocation failed");
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		temporary = *head;

		while (temporary->next != NULL)
		{
			temporary = temporary->next;
		}

		temporary->next = new_node;
		new_node->prev = temporary;
	}

	return (new_node);
}
