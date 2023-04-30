#include "main.h"

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of array
 * @c: specifier char
 *
 * Return: pointer to an array
*/

char *create_array(unsigned int size, char c)
{
	char *x;
	unsigned int a;

	if (size == 0)
		return (NULL);

	x = malloc(size * sizeof(*x));
	if (x == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		x[a] = c;
	return (x);
}
