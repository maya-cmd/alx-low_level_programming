#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
 *main - The function adds positive numbers
 *@argc : Argument count
 *@argv :Argument vector
 *
 *Return: Always 0 on success
 */

int main(int argc, char *argv[])
{
	int k, number, change;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	number = atoi(argv[1]);
	change = 0;

	if (number < 0)
	{
		printf("0\n");
		return (0);
	}

	for (k = 0; k < 5 && number >= 0; k++)
	{
		while (number >= coins[k])
		{
			change++;
			number -= coins[k];
		}
	}

	printf("%d\n", change);
	return (0);
}
