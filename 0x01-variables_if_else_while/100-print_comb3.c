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

		for (i = 0; i < 10; i++)
		{
			for (j = 0; j < 10; j++)
			{
				if (i != j)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar('\n');
				}
			}
		}
return (0);
}
