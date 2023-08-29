#include "lists.h"
/**
 *print_listint - Prints all the elements of a listint_t list
 *@h: The head of listint_t
 *
 *Return: The number of nodes present
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	size_t count = 0;

	temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}

	return (count);
}
