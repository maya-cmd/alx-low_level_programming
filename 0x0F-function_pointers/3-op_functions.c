#include "3-calc.h"
/**
 *op_add - Function adds two integers
 *@a: The first number
 *@b: The second number
 *Return: The sum of a and b
 */
int op_add(int a, int b)
{
	int sum;

	sum = a + b;
	return (sum);
}
/**
 *op_sub - The function subtracts two integers
 *@a: The first number
 *@b: The second number
 *
 *Return: The difference of a and b
 */
int op_sub(int a, int b)
{
	int subtraction;

	subtraction = a - b;
	return (subtraction);
}
/**
 *op_mul - Function multiplies two integers
 *@a: The first number
 *@b: The second number
 *
 *Return: The product of a and b
 */
int op_mul(int a, int b)
{
	int multiplication;

	multiplication = a * b;

	return (multiplication);
}
/**
 *op_div - Function divides two integers
 *@a: The first number
 *@b: The second number
 *
 *Return: The result of the division of a by b
 */
int op_div(int a, int b)
{
	int division;

	division = a / b;

	return (division);
}
/**
 *op_mod - Function finds remainder of division of two integers
 *@a: first number
 *@b: The second number
 *
 *Return: The remainder of the division of a by b
 *
 */
int op_mod(int a, int b)
{
	int modulo;

	modulo = a % b;
	return (modulo);
}

