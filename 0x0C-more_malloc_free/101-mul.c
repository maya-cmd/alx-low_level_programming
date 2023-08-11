#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int _length(char *s);
int is_digit(char *s);
/**
 * main - Function  multiplies two positive numbers
 * @argc: Number of arguments
 * @argv: The array of arguments available
 *
 * Return:on success returns 0 and 98 for error
 */

int main(int argc, char *argv[])
{
	char *str1, *str2;
	int j, k = 0, dig1, dig2, length1, length2, length3, overflow, *outcome;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	str1 = argv[1];
	str2 = argv[2];

	if (!is_digit(str1) || !is_digit(str2))
	{
		printf("Error\n");
		return (98);
	}

	length1 = _length(str1);
	length2 = _length(str2);
	length3 = length1 + length2 + 1;

	outcome = (int *) malloc(sizeof(int) * length3);
		if (!outcome)
		return (1);

	for (j = 0; j <= length1 + length2; j++)
		outcome[j] = 0;

	for (length1 = length1 - 1; length1 >= 0; length1--)
	{
		dig1 = str1[length1] - '0';
		overflow = 0;

		for (length2 = _length(str2) - 1; length2 >= 0; length2--)
		{
			dig2 = str2[length2] - '0';
			overflow += outcome[length1 + length2 + 1] + (dig1 * dig2);
			outcome[length1 + length2 + 1] = overflow % 10;
			overflow /= 10;
		}

		if (overflow > 0)
			outcome[length1 + length2 + 1] += overflow;
	}

	for (j = 0; j < length3 - 1; j++)
	{
		if (outcome[j])
			k = 1;
		if (k)
			_putchar(outcome[j] + '0');
	}
	if (!k)
		_putchar('0');
	_putchar('\n');

	free(outcome);
	return (0);
}

/**
 *_length - Function returns length of a string
 *@s: The string to be used
 *
 *Return: String length
 */
int _length(char *s)
{
	int j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	return (j);
}

/**
 *is_digit - Function checks for digits in string
 *@s: The string to be used
 *
 *Return: when digit is found returns 1 and 0 otherwise
 */
int is_digit(char *s)
{
	int j = 0;

	while (s[j])
	{
		if (s[j] < '0' || s[j] > '9')
			return (0);
		j++;
	}
	return (1);
}

