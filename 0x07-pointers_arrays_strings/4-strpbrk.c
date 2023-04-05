#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: pointer
 * @accept: pointer
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
*/
char *_strpbrk(char *s, char *accept)
{
	int x, l;
	char *pr;

	x = 0;
	while (s[x] != '\0')
	{
		l = 0;
		while (accept[l] != '\0')
		{
			if (accept[l] == s[x])
			{
				pr = &s[x];
				return (p);
			}
			l++;
		}
		x++;
	}
	return (0);
}
