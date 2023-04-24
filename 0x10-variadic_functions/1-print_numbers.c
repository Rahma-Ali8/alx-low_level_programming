#include "variadic_functions.h"

/**
 * print_number - function that prints numbers, followed by a new line
 * @separator: string separator
 * @n: number of arg
 * @...: int to print
 *
 * Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list	po;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(po, n);

	while (i--)
		printf("%d%S", va_arg(po, int), 
				i ? (separator ? separator : "") : "\n");
	va_end(po);

}
