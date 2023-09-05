#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
/**
 *read_textfile - Function reads a text file and
 *prints it to the POSIX standard output
 *@filename: The file to be read
 *@letters:The number of letters it should read and print
 *
 *Return: Actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes_read_count, file_descriptor, bytes_written_count;
	char *buffer;

	if (filename == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_descriptor);
		return (0);
	}
	bytes_read_count = read(file_descriptor, buffer, letters);
	if (bytes_read_count == -1)
	{
		close(file_descriptor);
		free(buffer);
		return (0);
	}
	bytes_written_count = write(STDOUT_FILENO, buffer, bytes_read_count);
	if (bytes_written_count == -1 || bytes_written_count != bytes_read_count)
	{
		close(file_descriptor);
		free(buffer);
		return (0);
	}
	close(file_descriptor);
	free(buffer);
	return (bytes_read_count);
}
