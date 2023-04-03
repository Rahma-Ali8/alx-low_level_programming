#include "main.h"
/**
 * *_memset -  function that fills memory with a constant byte
 *
 * @s: pointer input
 * @b: pointer input
 * @n: pointer input
 * Return: Pointer s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; n > 0; itr++)
	{
		s[itr] = b;
	}

	return (s);
}
