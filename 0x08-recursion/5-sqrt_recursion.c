#include "main.h"
#include <stdio.h>

int _real_sqrt(int a, int n);

/**
 *_sqrt_recursion - Function returns the natural square root of a number
 *@n : number used to get the square root
 *
 *
 *Return: The natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_real_sqrt(1, n));
}

/**
 *_real_sqrt - Function calculates natural square root of number
 *@a:input value
 *@n: The number used to get the square root
 *
 *Return: The natural  square root
 */
int _real_sqrt(int a, int n)
{

	if (a * a == n)
		return (a);
	if (a * a  > n)
		return (-1);
	return (_real_sqrt(a + 1, n));
}
