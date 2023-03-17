#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: use the write function
 *   size-t write(int fd, const void *buf ,size-t count);
 *
 * Return: 1 (error).
 */

int main(void)
{	char arr1[]"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(1, arr1, 59);
	return (1);
}
