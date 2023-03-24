#include "main.h"
/**
 * print_square - prints a square using #
 *
 * @size: the size of square
 *
 * Return: Always 0 (Success)
*/

void print_square(int size)
{
	int len, wid;

	for (len = 1; len <= size; len++)
	{
		for (wid = 1; wid <= size; wid++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
