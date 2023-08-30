#include "lists.h"
/**
 *sum_listint - Function returns the sum of all the data (n) of a listint_t
 *@head: The head of listint_t
 *
 *Return: The sum of all data
 *
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int add = 0;

	temp = head;

	while (temp)
	{
		add += temp->n;

		temp = temp->next;
	}
	return (add);
}

