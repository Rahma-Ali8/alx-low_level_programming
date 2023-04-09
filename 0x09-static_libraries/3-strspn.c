#include "main.h"
/**
 * _strspn -  function that gets the length of a prefix substring
 * @s: pointer
 * @accept: pointer
 * Return: x
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, l;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (l = 0; accept[l] != s[x]; l++)
		{
			if (accept[l] == '\0')
				return (x);
		}
	}
	return (x);
}
