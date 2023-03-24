#include "main.h"

/**
 * print_numbers - print number 0 - 9
 *		only using _putchar twice
 *
 * Return: Always 0 (Success)
 */
int print_numbers(void)
{
	int c = 0;

	do {
		_putchar(c + 48);
		c++;

	} while (c >= 0 && c <= 9);
	_putchar('\n');
}
