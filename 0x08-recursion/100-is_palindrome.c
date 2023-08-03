#include "main.h"

int string_length(char *s);
int compare_character(char *s, int num1, int num2);

/**
 *is_palindrome - Function checks if string is palindrome
 *
 *@s : String to be checked
 *
 *
 *Return:If it is palindrom 1 is returned, 0 it's not
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare_character(s, 0, string_length(s)));
}

/**
 *string_length - Finds out length of the string
 *
 *@s: The string used
 *
 *Return: length of the string
 */
int string_length(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + string_length(s + 1));
}
/**
 * compare_character - Compares characters of the string
 * @s: String used
 * @num1:Iterator
 * @num2: Iterator
 *
 * Return: If it is palindrom 1 is returned, 0 it's not
 */
int compare_character(char *s, int num1, int num2)
{
	if (*(s + num1) == *(s + num2))
	{
		if (num1 == num2 || num1 == num2 + 1)
			return (compare_character(s, num1 + 1, num2 - 1));
	}
	return (1);
}
