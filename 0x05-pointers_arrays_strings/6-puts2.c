#include "main.h"
/**
 * puts2 - prints every other character of a string,
 * starting with the first character
 *@str : The string
 * Return: Always 0.
 */
void puts2(char *str)
{
int length = 0;
int j = 0;
char *y = str;
int o;

while (*y != '\0')
{
y++;
length++;
}
j = length - 1;
for (o = 0; o <= j; o++)
{
if (o % 2 == 0)
{
_putchar(str[o]);
}
}
_putchar('\n');
}
