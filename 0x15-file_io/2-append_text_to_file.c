#include "main.h"
/**
*append_text_to_file - Function adds a  text at the end of  file
*@filename: The file to add text to
*@text_content: The text to be appended
*
*Return:1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
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

	file_des = open(filename, O_WRONLY | O_APPEND);

	write_output = write(file_des, text_content, text_len);

	if (file_des == -1 || write_output == -1)
		return (-1);
	close(file_des);
	return (1);
}
