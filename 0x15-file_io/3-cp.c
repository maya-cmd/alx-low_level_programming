#include "main.h"

void close_open_files(int fd);
char *buffer_buffer(char *file);

/**
 *close_open_files - Function closes open files
 *@fd: File descriptor that is open
 *
 */
void close_open_files(int fd)
{
	int result;

	result  = close(fd);

	if (result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd\n");
		exit(100);
	}
}

/**
 *buffer_buffer - Function puts aside 1024 bytes for a buffer
 *@file: File that buffer is holding chars for
 *
 *Return:Pointer to the new buffer
 */
char *buffer_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}


/**
 *main - Function copies contents of one file to another
 *@argc: Number of arguments given
 *@argv: Array of arguments pointers
 *Return: 0 on success
 *
 * Description:If number of arguments is incorrect exit with code 97.
 * when the file_from isn’t there or can’t be read  exit with code 98.
 * Incase file_to’s creation isn’t possible or can’t be
 * written to  exit with code 99.
 * If closing file_to or file_from is not possible use exit code 100.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, read_result, write_result;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	buffer = buffer_buffer(argv[2]);

	file_from = open(argv[1], O_RDONLY);
	read_result = read(file_from, buffer, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (file_from == -1 || read_result == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		write_result = write(file_to, buffer, read_result);
		if (file_to == -1 || write_result == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		read_result = read(file_from, buffer, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);

	} while (read_result > 0);

	close_open_files(file_from);
	close_open_files(file_to);

	return (0);
}


