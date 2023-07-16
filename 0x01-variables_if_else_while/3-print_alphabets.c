#include<stdio.h>
#include<ctype.h>
/**
 * main - Entry point
 *iterare over the lowercase alphabet characters and print
 * change to uppercase
 * output results
 * Return: Always 0 (Success)
 */
int main(void)
{
char c, result;

for (c = 'a'; c <= 'z'; c++)
{
result = toupper(c);
putchar (result);
}
putchar('\n');
return (0);
}
