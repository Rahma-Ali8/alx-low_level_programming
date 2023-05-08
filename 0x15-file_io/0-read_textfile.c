#include "main.h"

/**
 * read_textfile -  reads a text file and prints it to
 * the POSIX standard output
 * @filename: file to read
 * @letters: number of letters
 *
 * Return: 0 if it is NULL
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *fp;
	ssize_t x;
	ssize_t y;
	ssize_t z;

	if (filename == NULL)
		return (0);

	fp = malloc(sizeof(char) * letters);
	if (fp == NULL)
		return (0);
	x = open(filename, O_RDONLY);
	y = read(x, fp, letters);
	z = write(STDOUT_FILENO, fp, y);

	if (x == -1 || y == -1 || z == -1 || z != y)
	{
		free(fp);
		return (0);
	}

	free(fp);
	close(x);

	return (z);

}
