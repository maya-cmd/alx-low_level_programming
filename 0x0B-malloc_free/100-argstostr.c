#include <stdlib.h>
#include "main.h"
/**
 *argstostr - The function concatenates all the arguments of your program
 *@ac: Argument count
 *@av: Argument vector
 *
 *Return: A pointer to a new string, or NULL if it fails
 *
 */
char *argstostr(int ac, char **av)
{
	int  size = 0, a, b, n = 0;
	char *concatenated;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			size++;
		}
		size++;
	}
	concatenated = (char *)malloc(sizeof(char) * (size + 1));
	if (concatenated == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			concatenated[n] = av[a][b];
			n++;
		}
		concatenated[n] = '\n';
		n++;
	}
	concatenated[n] = '\0';
	return (concatenated);
}
