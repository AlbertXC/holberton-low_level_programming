#include "main.h"

/**
 * read_textfile - Function that reads a text file and prints it
 *				   to the POSIX standard output.
 * @filename: The File
 * @letters: Letters to print
 *
 * Return: Always 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d, rdd;
	char *bff = malloc(sizeof(char *) * letters);

	if (!bff)
		return (0);

	if (!filename)
		return (0);
	
	file_d = open(filename, O_RDONLY, 0600);
	if (file_d == -1)
		return (0);
	
	rdd = read(file_d, bff, letters);
	write(STDOUT_FILENO, bff, rdd);

	free(bff);
	close(file_d);
	
	return (rdd);
}
