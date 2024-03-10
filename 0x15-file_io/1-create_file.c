#include "main.h"

/**
 * create_file - Creates a new file and writes content to it.
 * @filename: A pointer to the name of the file to be created.
 * @text_content: A pointer to a string to be written to the file.
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, write_result, length = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	file_descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	write_result = write(file_descriptor, text_content, length);
	if (file_descriptor == -1 || write_result == -1)
		return (-1);
	close(file_descriptor);
	return (1);
}

