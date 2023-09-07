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
	int fd_from, fd_to, read_result, write_result;
	char *buffer = malloc(BUFFER_SIZE);
	const char *file_from;
	const char *file_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Memory allocation failed\n");
		exit(1);
	}
	fd_from = open(file_from, O_RDONLY);
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	do {
		if (fd_from == -1 || read_result == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			free(buffer);
			exit(98);
		}
		if (fd_to == -1 || write_result == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
			free(buffer);
			exit(99);
		}
		read_result = read(fd_from, buffer, BUFFER_SIZE);
		write_result = write(fd_to, buffer, read_result);
	} while (read_result > 0);
	free(buffer);
	close_open_files(fd_from);
	close_open_files(fd_to);
	return (0);
}
