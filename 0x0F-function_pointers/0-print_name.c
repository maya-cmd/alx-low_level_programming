#include "function_pointers.h"
#include <stdlib.h>
/**
 *print_name - Function prints name
 *@name: Name to be printed
 *@f: Pointer to the funtion to be printed
 *
 *Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name)
		return;
	if (!f)
		return;
	f(name);
}
