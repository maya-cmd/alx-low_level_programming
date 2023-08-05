#include <stdio.h>
#include "main.h"

/**
 *main - The function priints it's name
 *@argc : Argument count
 *@argv :Argument vector
 *
 *Return: Always 0 on success
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
