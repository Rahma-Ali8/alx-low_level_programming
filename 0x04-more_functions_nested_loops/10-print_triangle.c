#include "main.h"
/***/

void print_triangle(int size)
{
	int l, b;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (l = 1; l<= size; l++)
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
