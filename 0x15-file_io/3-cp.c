#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 1204
#define SE STDERR_FILENO

/**
 * main - main body
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int ifo, o_fo, i_w, o_w;
	char buffer[MAXSIZE];
	mode_t mode;

	mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	if (argc != 3)
		dprintf(SE, "Usage: cp file_from file_to\n"), exit(97);
	ifo = open(argv[1], O_RDONLY);
	if (ifo == -1)
		dprintf(SE, "Error: Can't read from file %s\n", argv[1]), exit(98);
	o_fo = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (o_fo == -1)
		dprintf(SE, "Error: Can't write to %s\n", argv[2]), exit(99);
	do {
		i_w = read(ifo, buffer, MAXSIZE);
		if (i_w == -1)
		{
			dprintf(SE, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		if (i_w > 0)
		{
			o_w = write(o_fo, buffer, (ssize_t)i_w);
			if (o_w == -1)
			{
				dprintf(SE, "Error: Can't write to %s\n", argv[2]);
				exit(99);
			}
		}
	} while (i_w > 0);
	i_w = close(ifo);
	if (i_w == -1)
		dprintf(SE, "Error: Can't close fd %d\n", ifo), exit(100);
	o_w = close(o_fo);
	if (o_w == -1)
		dprintf(SE, "Error: Can't close fd %d\n", o_fo), exit(100);
	return (0);
}
