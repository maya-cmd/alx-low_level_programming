#include "main.h"
#include <stdlib.h>

char *_memset(char *s, char b, unsigned int n);
/**
 *_calloc - allocates memory for an array of nmemb elements of size bytes each
 *@nmemb:The number of elements in the array
 *@size:each array  element size
 *
 *Return: Pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);

	if (p == NULL)
	{
		return (NULL);
	}
_memset(p, 0, nmemb * size);

	return (p);
}
/**
 *_memset - Function fills memory with constant bytes
 *@s:memory to be filled
 *@b:character to be used
 *@n:Number of times to use it
 *Return: Memory area pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}

	return (s);
}
