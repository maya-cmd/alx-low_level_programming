#include <stdlib.h>
#include "main.h"
/**
 *alloc_grid - Function returns a pointer to a 2 dimensional array of integers
 *@width: Width of the grid
 *@height: Height of the grid
 *
 *Return: Pointer to a 2 dimensional array of integers
 *
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i = 0, j = 0;

	if (height <= 0 || width <= 0)
		return (NULL);

	array = (int **) malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);

	while (i < height)
	{
		array[i] = (int *) malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			while (i >= 0)
			{
				free(array[i]);
				i--;
			}
			free(array);
			return (NULL);
		}
		i++;
	}

	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			array[i][j] = 0;
			j++;
		}
		i++;
	}

	return (array);
}


