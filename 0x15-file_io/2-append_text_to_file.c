#include "main.h"

/**
 * append_text_to_file - Appends text to the end of an existing file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 * Return: If the function fails or file_name is NULL - -1.
 *         f the file does not exist, or the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, write_result, length = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	write_result = write(file_descriptor, text_content, length);
	if (file_descriptor == -1 || write_result == -1)
		return (-1);
	close(file_descriptor);

	return (1);
}

