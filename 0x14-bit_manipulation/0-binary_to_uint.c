#include <stdio.h>
#include <main.h>

/**
 * binary_to_uint - to convert biary num string to unsigned int
 * @b: pointer to an array to char
 *
 * Return: the result
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 2;
	unsigned int i, k;
	unsigned int len;

	if (b == NULL)
		return (0);

	len = strlen(b);

	for (k = len; k > 0; k--)
	{
		if (b[k] != '0' || b[k] != '1')
			return (0);
		else if (b[k] == '1')
			i += atoi(b) * x;
		x *= 2;

	}
	return (i);



}
