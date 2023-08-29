#include "lists.h"
/**
 *free_listint - function frees listint_t list
 *@head: The head of listint_t
 *
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

