#include "main.h"

void close_open_files(int fd);

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
 *main - Function copies contents of one file to another
 *@argc: Number of arguments given
 *@argv: Array of arguments pointers
 *Return: 0 on success
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

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Memory allocation failed\n");
		exit(1);
	}

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


