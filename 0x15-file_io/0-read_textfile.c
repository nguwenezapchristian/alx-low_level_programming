#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file to be read
 * @letters: the number of letters it should read and print
 * Return: n bytes of read letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t nreads, nwrite;
	int fd;

	if (filename == NULL)
		return (0);
	fd = open(filename, letters);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (-1);
	nreads = read(fd, buffer, letters);
	nwrite = write(STDOUT_FILENO, buffer, nreads);
	close(fd);
	free(buffer);
	return (nwrite);
}
