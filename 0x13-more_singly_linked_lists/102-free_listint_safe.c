#include "lists.h"
/**
 *free_listint_safe - Function frees listint_t list
 *@h: The head of listint_t
 *
 *Return: The size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t freed_count = 0;
	int address_difference;

	if (!h || !*h)
		return (0);


	while (*h)
	{
		address_difference = *h - (*h)->next;
		if (address_difference > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			freed_count++;
		}
		else
		{
			free(*h);
			*h = NULL;
			freed_count++;
			break;
		}
	}

	*h = NULL;

	return (freed_count);
}


