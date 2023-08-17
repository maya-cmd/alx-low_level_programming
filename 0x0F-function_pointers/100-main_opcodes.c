#include <stdio.h>
#include <stdlib.h>
/**
 *main - Function prints the opcodes of its own main function
 *@argc: The number of arguments
 *@argv: The argument array
 *
 *Return:0 on success
 *
 */
int main(int argc, char *argv[])
{
	int bytes, n = 0;
	char *mem;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	mem = (char *)main;

	while (n < bytes)
	{
		if (n == bytes - 1)
		{
			printf("%.2x\n",(unsigned char)mem[n]);
			break;
		}
		else
		{
			printf("%.2x ", (unsigned char)mem[n]);
		}
		n++;
	}
}
