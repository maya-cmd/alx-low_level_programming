#include "lists.h"
/**
 *listint_len - Returns the number of elements in a linked listint_t list.
 *@h: The head of listint_t
 *
 *Return: Number of elements in a linked listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t number = 0;
	const listint_t *temp;

	temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		number++;
	}

	return (number);
}
