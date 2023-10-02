#include "main.h"
/**
*create_file - Function creates a file
*@filename: File supposed to be created
*@text_content:A NULL terminated string to write to the file
*
*Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int file_des, write_output, text_len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_len] != '\0')
		{
			text_len++;
		}
	}
	file_des = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	write_output = write(file_des, text_content, text_len);

	if (file_des == -1 || write_output == -1)
	{
		return (-1);
	}
	close(file_des);
	return (1);
}
