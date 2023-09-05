#include "main.h"
/**
 *append_text_to_file - Function appends text at the end of a file
 *@filename: The file to append to
 *@text_content: The text to be appended
 *
 *Return:1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
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

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	write_result = write(file_descriptor, text_content, text_length);

	if (file_descriptor == -1 || write_result == -1)
		return (-1);

	close(file_descriptor);

	return (1);
}
