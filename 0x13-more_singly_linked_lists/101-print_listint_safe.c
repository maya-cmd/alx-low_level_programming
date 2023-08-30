#include "lists.h"
/**
 *print_listint_safe - Function prints a listint_t linked list
 *@head: The head of listint_t
 *
 *Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp_node = NULL;
	const listint_t *list_ptr = NULL;
	size_t new_node;
	size_t count = 0;

	temp_node = head;

	while (temp_node)
	{

		printf("[%p] %d\n", (void *)temp_node, temp_node->n);

		count++;

		temp_node = temp_node->next;

		list_ptr = head;
		new_node = 0;


		while (new_node < count)
		{
			if (temp_node == list_ptr)
			{
				printf("-> [%p] %d\n", (void *)temp_node, temp_node->n);
				return (count);
			}
			list_ptr = list_ptr->next;
			new_node++;
		}

		if (!head)
			exit(98);
	}

	return (count);
}

