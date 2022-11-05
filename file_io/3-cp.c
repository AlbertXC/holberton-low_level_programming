#include "main.h"

/**
 * error_file - ...
 * @file_from: ...
 * @file_to: ...
 * @argv: ...
 *
 * Return: ...
 */

void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - ...
 * @argc: ...
 * @argv: ...
 * Return: ...
 */

int main(int argc, char *argv[])
{
	int ffrom, fto, close_err;
	ssize_t rd, wrt;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage cp file_from file to");
		exit(97);
	}

	ffrom = open(argv[1], O_RDONLY);
	fto = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(ffrom, fto, argv);

	rd = 1024;
	while (rd == 1024)
	{
		rd = read(ffrom, buff, 1024);
		if (rd == -1)
			error_file(-1, 0, argv);

		wrt = write(fto, buff, rd);
		if (wrt == -1)
			error_file(0, -1, argv);
	}

	close_err = close(ffrom);
	if (close_err == -1)
	{
		dprint(STDERR_FILENO, "Error: Can't close fd %d\n", ffrom);
		exit(100);
	}

	close_err = close(fto);
	if (close_err == -1)
	{
		dprint(STDERR_FILENO, "Error: Can't close fd %d\n", ffrom)
		exit(100);
	}
	return (0);
}
