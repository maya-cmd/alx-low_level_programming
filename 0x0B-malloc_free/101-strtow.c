#include "main.h"
#include <stdlib.h>
/**
 *strtow - Function splits a string into words
 *@str: The string to be split
 *
 *Return: Returns NULL if str == NULL or str == ""
 */
int counting_words(char *str);

char **strtow(char *str)
{
	char **word_array, *current_word;
	int c = 0, w, j, k = 0, beginning, end, length = 0;

	while (*(str + length))
		length++;
	w = counting_words(str);
	if (w == 0)
		return (NULL);

	word_array = (char **) malloc(sizeof(char *) * (w + 1));
	if (word_array == NULL)
		return (NULL);

	for (j = 0; j <= length; j++)
	{
		if (str[j] == ' ' || str[j] == '\0')
		{
			if (c)
			{
				end = j;
				current_word = (char *) malloc(sizeof(char) * (c + 1));
				if (current_word == NULL)
					return (NULL);
				while (beginning < end)
					*current_word++ = str[beginning++];
				*current_word = '\0';
				word_array[k] = current_word - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			beginning = j;
	}

	word_array[k] = NULL;

	return (word_array);
}

/**
 *counting_words- Function counts number of words in a string
 *@str:String where words will be counted from
 *
 *Return: Words counted
 */
int counting_words(char *str)
{
	int in_word = 0, word = 0, c;

	for (c = 0; str[c] != '\0'; c++)
	{
		if (str[c] == ' ')
			in_word = 0;
		else if (in_word == 0)
		{
			in_word = 1;
			word++;
		}
	}

	return (word);
}
