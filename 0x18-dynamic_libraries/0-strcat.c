#include"main.h"

/**
 *_strcat - concatenates two strings
 *@dest: First string
 *@src: String to be appended to dest string
 *
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
int i, j;

for (i = 0; dest[i] != '\0'; i++)
{

}
for (j = 0; src[j] != '\0'; j++, i++)
{
dest[i] = src[j];
}
dest[i] = '\0';
return (dest);
}
