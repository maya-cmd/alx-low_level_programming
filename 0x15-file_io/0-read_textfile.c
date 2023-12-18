#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
/**
 *read_textfile - Function reads a text file and prints it
 *to the POSIX standard output
 *@filename: The file where data will be  read from
 *@letters:The number of letters to be  read and printed
 *
 *Return: The actual number of letters it could read and print
 */
size_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_des, bytes_read, bytes_written;
	char *buff;

	if (filename == NULL)
		return (0);

	file_des = open(filename, O_RDONLY);
	if (file_des == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		close(file_des);
		return (0);
	}
	bytes_read = read(file_des, buff, letters);
	if (bytes_read == -1)
	{
		close(file_des);
		free(buff);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buff, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		close(file_des);
		free(buff);
		return (0);
	}
	close(file_des);
	free(buff);
	return (bytes_read);
}
