#include "main.h"
/**
 * print_number - Prints integers
 * @n : Integer to be printed
 *
 * Return: Always 0.
 */
void print_number(int n)
{
	int num1;

	if (n < 0)
	{
		num1 = -n;
		_putchar('-');
	} else
	{
		num1 = n;
	}

	if (num1 / 10)
		print_number(num1 / 10);

	_putchar((num1 % 10) + '0');
}
