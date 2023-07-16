#include <stdio.h>
/**
 * main - Entry point
 *iterare over the hexadecimal digits and print
 * check for conditions
 * output results
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
		if (i < 10)
		{
			putchar(i + '0');
		}
		else
		{
			putchar(i - 10 + 'a');
		}
	}
	return (0);
}
