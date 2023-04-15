#include "main.h"

/**
 * *_memset - function that fills memory with constant byte
 * @s: pointer
 * @b: constant
 * @n: bytes
 * Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;

	return (ptr);
}
/**
 * *_calloc -  function that allocates memory for an array, using malloc
 * @nmemb: int of array
 * @size: bytes
 * Return: pointer to allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
		return (NULL);
	m = malloc(sizeof(int) * nmemb);

	if (m == 0)
		return (NULL);

	_memset(m, 0, size of(int) * nmemb);

	return (m);
}
