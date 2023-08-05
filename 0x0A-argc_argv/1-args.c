#include <stdio.h>
#include "main.h"

/**
 *main - The function outputs he number of arguments passed into it
 *@argc : Argument count
 *@argv :Argument vector
 *
 *Return: Always 0 on success
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
