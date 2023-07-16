#include <stdio.h>
/**
 * main - Entry point
 * Iterate over all possible combinations of two digits
 * check for conditions
 * output results
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

putchar('\n');
return (0);
}
