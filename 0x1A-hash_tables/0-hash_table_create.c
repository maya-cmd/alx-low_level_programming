#include "hash_tables.h"

/**
* hash_table_create - Function creates a hash table.
* @size: The size of input array
* Return: A pointer to newly created hash table and  NULL if otherwise
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newest_table;
	unsigned long int j;

	newest_table  = malloc(sizeof(hash_table_t));
	if (!newest_table)
	{
		return (NULL);
	}

	newest_table->size = size;
	newest_table->array = malloc(sizeof(hash_node_t *) * size);
	if (!newest_table->array)
	{
		free(newest_table);
		return (NULL);
	}
	for (j = 0; j < size; j++)
	{
		newest_table->array[j] = NULL;
	}
	return (newest_table);
}
