#include "main.h"
/**
 * swap_int - Swaps the values of two integers.
 *@a : The first input
 *@b : The second input
 * Return: b, a
 */
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*a = temp;
}
