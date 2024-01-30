#include "main.h"
/**
 * *_strcpy -  copies the string pointed to by src
 * @dest : copy to
 * @src : copy from
 *
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
int x;

while (src[i] != '\0')
{
i++;
}
for (x = 0; x <= i; x++)
{
dest[x] = src[x];
}
return (dest);
}
