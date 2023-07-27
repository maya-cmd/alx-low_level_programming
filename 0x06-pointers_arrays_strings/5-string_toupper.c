#include "main.h"
/**
 * string_toupper - Converts string to uppercase letters
 *@s : string to be converted
 * Return: Always 0.
 */
char *string_toupper(char *s)
{
int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}

	return (s);
}
