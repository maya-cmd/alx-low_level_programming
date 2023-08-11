#include "main.h"
#include <stdlib.h>
/**
 *_realloc - Function reallocates a memory block using malloc and free
 *@ptr:pointer to the memory previously allocated with a call to malloc
 *@old_size:Bytes of the allocated space for ptr
 *@new_size: Bytes of the new memory block
 *
 *Return: Pointer to the newly  allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int j;
	char *current_ptr;
	char *old_ptr;

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
	{
		return (malloc(new_size));
	}

	if (new_size < old_size)
	{
		old_size = new_size;
	}
	current_ptr = malloc(new_size);

	if (!current_ptr)
		return (NULL);

	old_ptr = ptr;


	for (j = 0; j < old_size; j++)
	{
		current_ptr[j] = old_ptr[j];
	}
		free(ptr);
	return (current_ptr);
}

