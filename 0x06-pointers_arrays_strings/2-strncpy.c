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
int i, j;

for (i = 0; dest[i] != '\0'; i++)
{

}

for (j = 0; j < n && src[j] != '\0'; j++)
{
dest[j] = src[j];
}

dest[j] = '\0';

return (dest);
}
