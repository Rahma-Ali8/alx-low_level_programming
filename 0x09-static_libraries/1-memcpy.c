#include "main.h"
/**
 * *_memcpy -  function copies n bytes from memory area src to memory area dest
 * @dest: pointer
 * @src: pointer
 * @n: length of area
 * Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
