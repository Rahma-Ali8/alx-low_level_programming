#include "main.h"
/**
 * _strcmp -  function that compares two strings
 * @s1: pointer input
 * @s2: pointer input
 * Return: The result of c
*/
int _strcmp(char *s1, char *s2)
{
	int x = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			c = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (c);
}
