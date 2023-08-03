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
	return (_real_sqrt(n, 0));
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
	int square_root = a * a;

	if (square_root > n)
		return (-1);
	if (square_root == n)
		return (a);
	return (_real_sqrt(n, a + 1));
}
