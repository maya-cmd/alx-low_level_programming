#include <stdio.h>
/**
 * main - prints the sum of the even-valued terms
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i = 0;
long j = 1, k = 2, sum = k;

while (k <= 4000000)
{
if (k % 2 == 0)
sum += k;

long next = j + k;
j = k;
k = next;
}

printf("%ld\n", sum);
return (0);
}
