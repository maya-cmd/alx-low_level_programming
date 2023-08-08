#include "main.h"
#include <stdlib.h>
/**
 *create_array - Function creates an array of characters and initializes
 *it to a specific character
 *@size: size of the array
 *@c: character to be initialized
 *
 *Return: Pointer to the array
 *
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size == 0)
	{
		return (NULL);
	}
		p = (char *)malloc(size * sizeof(char));

	if (p != NULL)
	{
		for (i = 0; i < size; i++)
		{
			p[i] = c;
		}
	}

	return (p);
}
