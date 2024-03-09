#include "main.h"

/**
 * append_text_to_existing_file - Appends text to the end of an existing file.
 * @file_name: A pointer to the name of the file.
 * @text_to_append: The string to add to the end of the file.
 * Return: If the function fails or file_name is NULL - -1.
 *         f the file does not exist, or the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_existing_file(const char *file_name, char *text_to_append)
{
	int file_descriptor, write_result, length = 0;

	if (file_name == NULL)
		return (-1);
	if (text_to_append != NULL)
	{
		for (length = 0; text_to_append[length];)
			length++;
	}
	file_descriptor = open(file_name, O_WRONLY | O_APPEND);
	write_result = write(file_descriptor, text_to_append, length);
	if (file_descriptor == -1 || write_result == -1)
		return (-1);
	close(file_descriptor);

	return (1);
}

