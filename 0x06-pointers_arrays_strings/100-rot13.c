#include "main.h"
/**
 * rot13 - function that encodes a string using rot13
 * @s: pointer input
 * Return: pointer
*/
char *rot13(char *s)
{
	int i;
	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *ptr = s;

	while (*s)
	{
		for (i = 0; i < 52; i++)
		{
			if (*s == rot13[i])
			{
				*s = rot[i];
				break;
			}
		}
		s++
	}
	return (ptr);
}
