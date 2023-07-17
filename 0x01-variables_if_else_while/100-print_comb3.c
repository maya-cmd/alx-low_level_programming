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
	int i, j;

		for (i = 0; i < 9; i++)
		{
			for (j = i + 1; j < 10; j++)
			{
				if (i != j)
				{
					putchar('0' + i);
					putchar('0' + j);
				}
			}
		}
putchar('\n');
return (0);
}
