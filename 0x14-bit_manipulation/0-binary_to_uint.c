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
	int num1 = 0;
	int num2 = 1;
	int i;


	for (i = (slen - 1); i >= 0; i--)
	{
		if (b[i == '1'])
			num1 += num2;

		num2 *= 2;


	
	}
	return (num1);



}
