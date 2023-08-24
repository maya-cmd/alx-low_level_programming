#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 *add_node - Function adds new node at the beginning of  list-t
 *@str: String to be added to node
 *@head: Double pointer to list_t
 *
 *Return: Address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *new_node;

	while (str[len])
	{
		len++;
	}
	new_node = malloc(sizeof(list_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}

