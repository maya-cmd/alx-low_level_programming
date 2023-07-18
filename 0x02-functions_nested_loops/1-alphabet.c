#include "main.h"
/**
 * _putchar - writes the character c to stdout
 *
 * Return: On success 1.
 */
void print_alphabet(void)
{
	char c;

	for (c = 97; c <= 122; c++)
	{
		_putchar (c);
	}
_putchar('\n');
}
