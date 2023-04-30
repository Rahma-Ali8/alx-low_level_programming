#include "main.h"

/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * @str: char pointer
 *
 * Return: pointer
*/

char *_strdup(char *str)
{
	 int x = 0;
	 int size = 0;
	 char *y;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
	;
	y = malloc(size * sizeof(*str) + 1);

	if (y == 0)
		return (NULL);

	else
	{

		for (; x < size; x++)
			y[x] = str[x];
	}
	return (y);
}
