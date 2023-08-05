#include <stdio.h>
#include "main.h"

/**
 *main - The function outputs the arguments it gets
 *@argc : Argument count
 *@argv :Argument vector
 *
 *Return: Always 0 on success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
