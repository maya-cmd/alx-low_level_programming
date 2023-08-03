#include "main.h"

int prime_prime(int n, int b);

/**
 *is_prime_number - Finds out if integer is a prime number and is recursive
 *@n: Number to be used
 *
 *
 *
 *Return: 1 if n is a prime number, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_prime(n, n - 1));
}

/**
 *prime_prime  - Finds out if integer is a prime number
 *@n: Number to be used
 *@b :input number
 *
 *
 *Return: 1 if n is a prime number, 0 if not
 *
 */

int prime_prime(int n, int b)
{
	if (b == 1)
		return (1);
	if (n % b == 0 &&  b > 0)
		return (0);
	return (prime_prime(n, b - 1));
}
