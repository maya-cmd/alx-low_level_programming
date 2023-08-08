#include "main.h"
#include <stdlib.h>
/**
 *_strdup - Function returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 *@str: string to be duplicated
 *
 *Return: Pointer to a newly allocated space in memory
 *
 *
 */
char *_strdup(char *str)
{
	char *duplicate;
	int i, length;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	duplicate = (char *) malloc((length + 1) * sizeof(char));

	if (duplicate != NULL)
	{
		for (i = 0; i <= length; i++)
		{
			duplicate[i] = str[i];
		}
	}

	return (duplicate);
}

