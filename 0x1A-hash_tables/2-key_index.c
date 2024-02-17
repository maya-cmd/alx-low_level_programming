#include "hash_tables.h"

/**
* key_index - Function ouputs the index of a key.
* @key: The input key
* @size: The array size of the hash table
* Return: The index of the key
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
