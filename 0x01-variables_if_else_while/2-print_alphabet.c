#include<stdio.h>
#include<ctype.h>
/**
 * main - Entry point
 *iterare over the alphabet characters and print
 * change to lowercase
 * output results
 * Return: Always 0 (Success)
 */
int main(void)
{
char c, result;

for (c = 'A'; c <= 'Z'; c++)
{
result = tolower(c);
putchar (result);
}
putchar('\n');
return (0);
}
