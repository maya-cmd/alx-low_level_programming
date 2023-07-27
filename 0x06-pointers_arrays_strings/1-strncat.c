#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest : First string
 * @src : Second string to be appended to dest
 * @n: Describes number of characters needed to append from src to dest
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
