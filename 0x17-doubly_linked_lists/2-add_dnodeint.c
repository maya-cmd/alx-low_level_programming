#include "lists.h"

/**
 * add_dnodeint - Function adds node at beggining of list
 * @head: pointer to the node that is the head node
 * @n: node to add to list
 * Return: address of the new node added
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		perror("Memory allocation failed");
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}
	*head = new_node;

	return (new_node);
}
