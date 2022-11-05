#include "main.h"

/**
 * create_file - Fucntion that crates a file.
 * @filename: File to create
 * @text_content: String to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int file_d, len = 0;

	if (!filename)
		return (-1);

	file_d = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (file_d < 0)
		return (-1);

	while (text_content && text_content[len])
		len++;

	if (write(file_d, text_content, len) < 0)
	{
		close(file_d);
		return (-1);
	}
	close(file_d);
	return (1);
}
