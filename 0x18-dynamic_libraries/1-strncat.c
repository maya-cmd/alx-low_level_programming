#include "main.h"
/**
 * _strncat - Concatenates two strings
 * @dest : First string
 * @src : Second string to be appended to dest
 * @n: Describes number of characters needed to append from src to dest
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
int i, j;
for(i=0; dest[i]!='\0';i++){
}
for (j=0;j<n;j++){
dest[i] = src[j];
i++;
}
return 0;
}
