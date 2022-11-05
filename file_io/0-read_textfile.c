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
	ssize_t rd, prt, opn
	char bff;

	if (filename == NULL)
		return (0);

	bff = (malloc(sizeof(char) * letters);
	if (bff == NULL)
		return (0);

	rd = read(opn, buff, letters);
	prt = print(STDOUT_FILENO, buff, rd);
	opn = open(filename, O_RDONLY);

	if (rd == -1 || prt == -1 || opn == -1 || prt != rd)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(o);

	return (prt);
}
