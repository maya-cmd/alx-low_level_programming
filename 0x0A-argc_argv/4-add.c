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
	int i;
	unsigned int n, addition = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (n = 0; argv[i][n] != '\0'; n++)
			{
				if (!isdigit(argv[i][n]))
				{
					printf("Error: %s\n", argv[i]);
					return (1);
				}
			}

			addition += atoi(argv[i]);
		}
		printf("%d", addition);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}



