#include "hash_tables.h"
#include <stdio.h>

/**
* hash_table_delete -Function  deletes a hash table
* @ht: The hash table to be deleted
* Return: void
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int j;
	hash_node_t *next;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
	{
		return;
	}
	for (j = 0; j < ht->size; j++)
	{
		while (ht->array[j] != NULL)
		{
			next = ht->array[j]->next;
			free(ht->array[j]->key);
			free(ht->array[j]->value);
			free(ht->array[j]);
			ht->array[j] = next;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
