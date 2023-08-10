#include <stdlib.h>
#include "main.h"
/**
 *string_nconcat - concatenates two strings.
 *@s1:First string
 *@s2:Second string
 *@n: Bytes to ne copied from s2
 *Return: pointer to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int a, b, length1 = 0, length2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[length1] != '\0')
		length1++;

	while (s2[length2] != '\0')
		length2++;
	s3 = (char *)malloc(length1 + n + 1);
	if (s3 == NULL)
		return (NULL);
	for (a = 0; a < length1; a++)
		s3[a] = s1[a];
	if (n >= length2)
	{
		for (b = 0; b < length2; b++)
		{
			s3[a] = s2[b];
			a++;
		}
	}
	else
	{
		for (b = 0; b < n; b++)
		{
			s3[a] = s2[b];
			a++;
		}
	}
	s3[a] = '\0';
	return (s3);
}
