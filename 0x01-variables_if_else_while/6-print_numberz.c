#include<stdio.h>
/**
 * main - Entry point
 *iterare over the numbers and print
 * output results
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
	putchar(i + '0');
}
putchar('\n');
return (0);
}
