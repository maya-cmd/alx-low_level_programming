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
