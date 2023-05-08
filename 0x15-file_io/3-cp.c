#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *cr(char *file);
void close(int fp);

/**
 * cr - function to allocates 1024 bytes
 * @file: name of file buf
 *
 * Return: pointer new allocate
*/

char *cr(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: can't write to %s\n", file);
		exit(99);
	}

	return (buf);
}


/**
 * close - function to close file
 * @fp: file dis to close
*/

void close(int fp)
{
	int x;

	x = close(fp);

	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: canit close fp %d\n", fp);
		exit(100);
	}
}

/**
 * main -  program that copies the content of a file to another file
 * @argc: number of argument
 * @argv: an array of pointer
 *
 * Return: 0 success
*/

int main(int argc, char *argv[])
{
	int mn, el, k, l;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);

	}
	buf = cr(argv[2]);
	mn = open(argv[1], O_RDONLY);
	k = read(mn, buf, 1024);
	el = open(argv[2], O_WRONLY | O_TRUNC, 0664);

	do {
		if (mn == -1 || k == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		l = write(el, buf, k);
		if (el == -1 || l == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}
		k = read(mn, buf 1024);
		el = open(argv[2], O_WRONLY | O_APPEND);


	} while (k > 0);

	free(buf);
	close(mn);
	close(el);

	return (0);
}
