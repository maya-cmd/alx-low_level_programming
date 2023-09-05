#include "main.h"

/**
 *create_file - Function creates a file
 *@filename: The file to be created
 *@text_content:A NULL terminated string to write to the file
 *
 *Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, write_result, text_length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_length] != '\0')
		{
			text_length++;
		}
	}
	file_descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	write_result = write(file_descriptor, text_content, text_length);

	if (file_descriptor == -1 || write_result == -1)
		return (-1);

	close(file_descriptor);

	return (1);
}
