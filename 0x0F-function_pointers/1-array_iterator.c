#include "function_pointers.h"
#include <stdlib.h>
/**
 *array_iterator - Function executes a function given as a
 * parameter on each element of an array
 *
 *@array: The array to go through
 *@size: Array size
 *@action:Pointer to the function to be used
 *Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n = 0;

	if (!array)
		return;
	if (!action)
		return;

	while (n < size)
	{
		action(array[n]);
		n++;
	}
}

