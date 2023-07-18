#include "main.h"

/**
 * print_alphabet - function prints alphabet in lowercase
 *
 * Description: prints alphabet letters in lowecase
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
