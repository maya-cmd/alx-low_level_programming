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
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for (i = 0; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
