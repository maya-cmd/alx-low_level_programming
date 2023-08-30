#include "lists.h"
/**
 *get_nodeint_at_index - Function returns the nth node of a listint_t
 *@head: The head of listint_t
 *@index: index of the node, starting at 0
 *
 *Return: NULL or a pointer to the node being searched for
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int j = 0;

	temp = head;

	while (temp != NULL && j < index)
	{
		temp = temp->next;
		j++;
	}
	if (!temp || j < index)
		return (NULL);
	else
		return (temp);
}
