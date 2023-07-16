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
	int digits[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int num_digits = sizeof(digits) / sizeof(digits[0]);
	int i, j;

	for (int i = 0; i < num_digits; i++)
	{
		for (int j = 0; j < num_digits; j++)
		{
			putchar(digits[i] + '0');
			putchar(' ');
			putchar(digits[j] + '0');
			putchar('\n');
		}
	}
return (0);
}
