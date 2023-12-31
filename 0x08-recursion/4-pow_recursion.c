#include "main.h"
/**
 *_pow_recursion - Function returns the value of x raised to the power of y
 *@x : Value to be raised
 *@y : Power to raise value of x
 *
 * Return: Value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
