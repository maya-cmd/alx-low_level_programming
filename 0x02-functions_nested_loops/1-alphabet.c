#include "main.h"
/**
 * The main.h header that contains the prototype is included
 * _putchar - writes the character c to stdout
 *
 * The function iterates through the letters
 * and prints characters using _putchar.
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
