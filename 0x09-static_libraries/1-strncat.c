#include "main.h"
/**
 * _strncat - function that concatenates two strings
 *
 * @dest: pointer input
 * @src: pointer input
 * @n: number of bytes from src
 * Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int c, x;

	c = 0;

	while (dest[c])
		c++;

	for (x = 0; x < n && src[x] != '\0'; x++)
		dest[c + x] = src[x];

	dest[c + x] = '\0';

	return (dest);

}
