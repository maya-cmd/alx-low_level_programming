#include "hash_tables.h"

/**
* hash_table_get - Function retrieves a value that is associated with a key.
* @ht: The hash table to be used
* @key: The key to search for
* Return: value associated with the element, or NULL if key couldn’t be found
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int idx;

	if (ht == NULL || ht->array == NULL || ht->size == 0
		|| key == NULL || strlen(key) == 0)
	{
		return (NULL);
	}

	idx = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[idx];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			return (temp->value);
		}
		temp = temp->next;
	}
	return (NULL);
}
