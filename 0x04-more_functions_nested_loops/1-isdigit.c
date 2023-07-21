#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: The character  to be checked
 *
 * Return: On success 1 and 0 otherwise
 * On error, -1 is returned, and errno is set appropriately.
 */

int _isdigit(int c)
{
if (c >= 0  && c <= 9)
{
return (1);
}
else
{
return (0);
}
}
