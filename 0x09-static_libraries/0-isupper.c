#include "main.h"
#include <stdio.h>

/**
 * _isupper - check if c is upper.
 *
 * @c: input of alphabet
 *
 * Return: 1 if it uppercase, 0 if noy.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
