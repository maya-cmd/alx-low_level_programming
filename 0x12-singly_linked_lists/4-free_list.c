#include "lists.h"
#include <stdlib.h>
/**
 *free_list - Function frees list_t
 *@head: ponter to list-t to be freed
 *
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head)
	{
		current = head->next;
		free(head->str);
		free(head);
		head = current;
	}
}
