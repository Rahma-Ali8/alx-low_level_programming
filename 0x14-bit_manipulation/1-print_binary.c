#include <stdio.h>
#include <main.h>

/**
 * print_binary - to print binary number
 * @n: num to print
 *
 * Return: nothing
*/

void print_binary(unsigned long int n)
{
	unsigned int x;

	for (x = 1 << 7; x > 0; x /= 2)
		(n & x) ? printf("1") : printf("0");

}
