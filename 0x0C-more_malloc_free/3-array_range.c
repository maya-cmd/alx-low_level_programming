#include "main.h"
#include <stdlib.h>
/**
 *array_range - The function creates an array of integers
 *@min: The least value in the array
 *@max: Largest value in the array
 *
 *Return: A pointer to the newly created array
 *
 */
int *array_range(int min, int max)
{
	int j;
	int *max_min;

	if (min > max)
	{
		return (NULL);
	}

	max_min  = (int *)malloc((max - min + 1) * sizeof(int));

	if (max_min == NULL)
	{
		return (NULL);
	}
	else
	{
		for (j = 0; j <= max - min; j++)
		{
			max_min[j] = min + j;
		}
	}
	return (max_min);
}



