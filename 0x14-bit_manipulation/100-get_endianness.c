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
	int i = 1;


	if (*(char *)&i == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

