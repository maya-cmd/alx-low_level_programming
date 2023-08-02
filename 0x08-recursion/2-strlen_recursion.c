#include "main.h"
/**
 * _strlen_recursion - Functions finds the length of a string
 *@s : The string who's length is to be found
 *
 *Return: String length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
