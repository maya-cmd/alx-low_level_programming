#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 *main - Main program that performs operations for all the functions
 *@argc: Number of arguments
 *@argv: Argements array
 *
 *Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int argument1, argument2;
	char operator;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	argument1 = atoi(argv[1]);
	argument2 = atoi(argv[3]);
	operator = *argv[2];

	operation = get_op_func(argv[2]);

	if (!operation)
	{
		printf("Error\n");
		exit(99);
	}
	if ((operator == '/' || operator == '%') && argument2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", operation(argument1, argument2));
	return (0);
}

