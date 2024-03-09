#include "main.h"
#include <stdlib.h>

/**
 * read_and_print_file - Reads a text file and prints its content to STDOUT.
 * file_path: Path to the text file to be read.
 * @num_chars: Number of characters to be read and printed.
 * Return: Number of bytes read and printed (w) on success,
 *         0 on failure or if file_path is NULL.
 */
ssize_t read_and_print_file(const char *file_path, size_t num_chars)
{
	char *buffer;
	ssize_t file_descriptor;
	ssize_t bytes_read;
	ssize_t bytes_written;

	file_descriptor = open(file_path, O_RDONLY);
	if (file_descriptor == -1)
		return (0);
	buffer = malloc(sizeof(char) * num_chars);
	bytes_read = read(file_descriptor, buffer, num_chars);
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	free(buffer);
	close(file_descriptor);
	return (bytes_written);
}

