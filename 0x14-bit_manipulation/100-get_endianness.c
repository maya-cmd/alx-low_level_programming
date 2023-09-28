#include "main.h"
#include <stdio.h>
/**
 *get_endianness - Function searches the endianness
 *
 *Return: endian small if 1 and big endian if 0
 *
 *
 */
int get_endianness(void)
{
	int i;

	i = get_endianness();

	if (i != 0)
	{
		printf("Endian is small\n");
	}
	else
	{
		printf("Endian is big\n");
	}

	return (0);
}

