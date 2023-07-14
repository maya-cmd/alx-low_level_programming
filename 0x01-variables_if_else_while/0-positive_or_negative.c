#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 * main - Entry point
 *if condition is true print the given statements
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("n is positive %d\n", n);
}
else if (n == 0)
{
printf("n is zero %d\n", n);
}
else if (n < 0)
{
printf("n is  negative %d\n", n);
}
return (0);
}
