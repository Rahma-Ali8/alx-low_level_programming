#include <stdio.h>
#include <main.h>
#include <string.h>

/**
 * binary_to_uint - to convert biary num string to unsigned int
 * @b: pointer to an array to char
 *
 * Return: the result
*/

unsigned int binary_to_uint(const char *b)

	int slen = strlen(b);
	int sum = 0;
	int num = 1;
	int i;


	for (i = (slen - 1); i >= 0; i--)
	{
		if (b[i] == '1')sum += num;
		num *= 2;


	
	}
	return (sum);



}
