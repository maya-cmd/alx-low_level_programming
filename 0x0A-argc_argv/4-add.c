#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *main - The function adds positive numbers
 *@argc : Argument count
 *@argv :Argument vector
 *
 *Return: Always 0 on success
 */

int main(int argc, char *argv[])
{
	int i;
	unsigned int n, addition = 0;
	char *x;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			x = argv[i];
			for (n = 0; n < strlen(x); n++)
			{
				if (x[n] < 48 || x[n] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			addition += atoi(x);
			n++;
		}
		printf("%d", addition);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}



