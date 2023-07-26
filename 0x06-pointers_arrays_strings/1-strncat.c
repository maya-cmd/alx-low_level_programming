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
int i, j;

for (i = 0; dest[i] != '\0'; i++)
{

}
for (j = 0; j < n && src[j] != '\0'; j++, i++)
{
dest[i] = src[j];
}
dest[i] = '\0';

return (dest);
}
