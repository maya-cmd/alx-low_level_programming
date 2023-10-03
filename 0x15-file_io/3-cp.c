#include "main.h"

void closing_open_files(int file_des);
char *buff_buff(char *file);

/**
*closing_open_files - Function closes all files that are open
*@file_des: Open file descriptor
*
*/

void closing_open_files(int file_des)
{
	int output;

	output = close(file_des);
	if (output == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_des);
		exit(100);
	}
}

/**
*buff_buff - Function sets aside 1024 bytes to be used by buffer
*@file: File that buffer is holding chars for
*
*Return: Pointer to the newly created buffer
*/

char *buff_buff(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
		"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buff);
}

/**
*main - Function copies data from one file to another
*@argc: Number of arguments present
*@argv: Array of arguments pointers present
*Return: 0 on success
*
* Description: If number of arguments is incorrect exit with code 97.
* when the file_from isn't there or can't be read exit with code 98
* Incase file_to's creation isn't possible or can't be
* written to exit with code 99.
* If closing file_to or file_from is not possible use exit code 100.
*/

int main(int argc, char *argv[])
{
	int file_from, file_to, read_output, write_output;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = buff_buff(argv[2]);

	file_from = open(argv[1], O_RDONLY);

	read_output = read(file_from, buff, 1024);

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (file_from == -1 || read_output == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

	write_output =  write(file_to, buff, read_output);

	if (file_to == -1 || write_output == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);

		free(buff);

		exit(99);
	}

	read_output = read(file_from, buff, 1024);

	file_to = open(argv[2], O_WRONLY | O_APPEND);

	} while (read_output > 0);

	closing_open_files(file_from);

	closing_open_files(file_to);

	return (0);
}



