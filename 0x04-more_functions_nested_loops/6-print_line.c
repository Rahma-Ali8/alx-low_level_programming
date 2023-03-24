#include "main.h"

/**
 * print_line - print a straight line
 * @n: the numbers of _ sign should be printed
 * Return: Always 0.
 */
void print_line(int n)
{
	int s;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (s = 0; s <= n; s++)
			_putchar('_');
		_putchar('\n');
	}
}
