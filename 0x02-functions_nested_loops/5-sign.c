#include "main.h"

/**
 * print_sign - function prints sign of a number
 *
 * @n : The number to be checked
 *
 * Description: prints the sign of a number.
 * Return: For positive number 1, for negative number -1
 * and for anything else 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
	return (-1);
}
