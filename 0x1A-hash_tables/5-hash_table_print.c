#include "hash_tables.h"
#include <stdio.h>

/**
* hash_table_print - Function prints a hash table
* @ht: The hash table
* Return: printed hash table
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx, flag = 0;
	hash_node_t *final;

	if (ht == NULL)
		return;

	printf("{");
	for (idx = 0; idx < ht->size; idx++)
	{
		if (ht->array[idx])
		{
			if (flag == 1)
				printf(", ");
			final = ht->array[idx];
			while (final != NULL)
			{
				printf("\'%s\': \'%s\'", final->key, final->value);
				final = final->next;
				if (final)
					printf(", ");
			}
			flag = 1;
		}
	}
	printf("}\n");
}
