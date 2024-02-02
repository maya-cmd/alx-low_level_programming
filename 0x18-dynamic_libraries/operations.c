#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int mod(int a, int b);

/**
 * add - Function adds towo numbers
 * @a: First number
 * @b: Second number
 * Return: Sum of two number
 */

int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Function adds towo numbers
 * @a: First number
 * @b: Second number
 * Return: Subtracts two numbers
 */

int sub(int a, int b)
{
        return (a - b);
}

/**
 * mul - Function adds towo numbers
 * @a: First number
 * @b: Second number
 * Return: Multplation of two numbers
 */

int mul(int a, int b)
{
        return (a * b);
}

/**
 * mod - Function adds towo numbers
 * @a: First number
 * @b: Second number
 * Return: modula of two numbers
 */

/**
 * div -  Function adds towo numbers
 * @a: First number
 * @b: Second number
 * Return: Divides two numbers
 */

int div(int a, int b)
{
        return (a / b);
}


int mod(int a, int b)
{
        return (a % b);
}
