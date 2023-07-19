#include "main.h"

/**
 * _islower - function checks for lowercase characters
 *
 * @c : The character in Ascii code
 *
 * Description: checks for lowercase characters
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _islower(int c)
{
	If(c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
