#include "main.h"

/**
 * _strlen - function of length of string
 * @a: char pointer
 *
 * Return: pointer of size
*/


int _strlen(char *a)
{
	int size = 0;

	for (; a[size] != '\0'; size++)
		;
	return (size);
}
/**
 * str_concat - function that concatenates two strings.
 * @s1: char of 1 pointer
 * @s2: char of 2 pointer
 *
 * Return: pointer
*/

char *str_concat(char *s1, char *s2)
{
	int size1, size2;
	int x;
	char *p;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	size1 = _strlen(s1);
	size2 = _strlen(s2);

	p = malloc((size1 + size2) * sizeof(char) + 1);
	if (p == 0)
		return (0);

	for (x = 0; x <= size1 + size2; x++)
	{
		if (x < size1)
			p[x] = s1[x];
		else
			p[x] = s2[x - size1];
	}
	p[x] = '\0';
	return (p);
}
