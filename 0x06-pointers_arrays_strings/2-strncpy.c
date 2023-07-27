#include "main.h"

/**
 * _strncpy - copies a string
 *
 * @dest: First string
 * @src: String to be copied from
 * @n:Describes number of characters of dest should be replaced with src
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
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
