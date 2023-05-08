#include "main.h"

/**
 * read_textfile -  reads a text file and prints it to
 * the POSIX standard output
 * @filename: file to read
 * @letters: number of letters
 *
 * Return: 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *fpointer;
	ssize_t x;
	ssize_t y;
	ssize_t z;

	x = open(filename, O_RDONLY);

	if (x == -1)
		return (0);

	fpointer = malloc(sizeof(char) * letters);
	z = read(x, fpointer, letters);
	y = write(STDOUT_FILENO, fpointer, z);

	free(fpointer);
	close(x);
	return (y);
}
