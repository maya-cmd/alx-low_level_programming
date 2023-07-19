#include "main.h"

/**
 * _isalpha - function checks for alphabetic characters
 *
 * @c : The character in Ascii code
 *
 * Description: checks for alphabetic characters
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
		return (0);
}
