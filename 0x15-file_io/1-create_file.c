#include "main.h"

/**
 * create_and_write_file - Creates a new file and writes content to it.
 * @file_name: A pointer to the name of the file to be created.
 * @content: A pointer to a string to be written to the file.
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_and_write_file(const char *file_name, char *content)
{
	int file_descriptor, write_result, length = 0;

	if (file_name == NULL)
		return (-1);
	if (content != NULL)
	{
		for (length = 0; content[length];)
			length++;
	}
	file_descriptor = open(file_name, O_CREAT | O_RDWR | O_TRUNC, 0600);
	write_result = write(file_descriptor, content, length);
	if (file_descriptor == -1 || write_result == -1)
		return (-1);
	close(file_descriptor);
	return (1);
}

