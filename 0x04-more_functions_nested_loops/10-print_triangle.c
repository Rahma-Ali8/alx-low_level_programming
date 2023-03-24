#include "main.h"
/**
 * print_triangle - print a triangle by # sign
 *
 * @size: the size of the triangle
 *
 * Return: Always 0 (Success)
*/

void print_triangle(int size)
{
	int l, b;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (l = 1; l <= size; l++)
		{
			for (b = 1; b <= size; b++)
			{
				if ((l + b) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
