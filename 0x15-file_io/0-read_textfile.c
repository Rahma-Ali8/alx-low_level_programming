#include "main.h"

/***/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *fpointer;
	ssize_t x, y, z;

	x = fopen("filename", "r");

	if ( x == -1)
		return (0);

	fpointer = malloc(sizeof(char) * letters);
	z = read(x, fpointer, letters);
	y = write(STDOUT_FILENO, fpointer, z);

	free(fpointer);
	fclose(x);
	return (y);
}
