#include<stdio.h>
#include<ctype.h>
/**
 * main - Entry point
 *iterare over the lowercase alphabet characters and print
 * check for conditions
 * output results
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
{
if (c != 'q' && c != 'e')
{
putchar (c);
}
}
putchar('\n');
return (0);
}
