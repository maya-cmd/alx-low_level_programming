#include "main.h"
#include <stdlib.h>
/**
 *str_concat - The function concatenates two strings
 *@s1: The first string
 *@s2: The second string
 *Return: Pointer to a newly allocated space in memory
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, length1 = 0, length2 = 0;

	char *s3;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[length1] != '\0')
	{
		length1++;
	}
	while (s2[length2] != '\0')
	{
		length2++;
	}
	s3 = (char *)malloc(length1 + length2 + 1);
	if (s3 ==  NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < length1; i++)
		{
			s3[i] = s1[i];
		}

		for (j = 0; j < length2; j++)
		{
			s3[i] = s2[j];
			i++;
		}
		s3[i] = '\0';
	}
	return (s3);
}
