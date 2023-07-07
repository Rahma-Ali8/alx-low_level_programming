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
	int size = sizeof(n) * 8;
	int pr = 0;

	while (size)
	{
		if (n & 1l << --size)
		{
			_putchar('1');
			pr++;
		}
		else if (pr)
			_putchar('0');
	
	}
	if (!pr)
		_putchar('0');

}
