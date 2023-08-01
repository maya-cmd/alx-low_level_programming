#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Function outputs the sum of the two diagonals
 * of a square matrix of integers
 * @size: The size of the matrix of integers
 * @a:The square matrix used to output the sum of diagonals
 */
void print_diagsums(int *a, int size)
{
	int i;

	unsigned int sum_sum, sum_sum2;

	sum_sum = 0;
	sum_sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum_sum += a[(size * i) + i];
		sum_sum2 += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", sum_sum, sum_sum2);
}
