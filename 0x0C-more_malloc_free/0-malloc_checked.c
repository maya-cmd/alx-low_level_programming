#include "main.h"
#include <stdlib.h>
/**
 *malloc_checked - Function  allocates memory using malloc
 *@b: Number of bytes to be allocated
 *
 *Return: Pointer to the allocated memory
 *
 */
void *malloc_checked(unsigned int b)
{
	void *mlc = malloc(b);

	if (mlc == NULL)
	{
		exit(98);
	}
	return (mlc);
}
