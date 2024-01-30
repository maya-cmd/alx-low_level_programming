#include "main.h"

/**
 * _isupper - checks for upper case character
 * @c: The character to be checked
 *
 * Return: On success 1 and 0 otherwise
 * On error, -1 is returned, and errno is set appropriately.
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
