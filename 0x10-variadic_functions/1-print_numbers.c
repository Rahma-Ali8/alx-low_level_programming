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
	unsigned int i;
	va_list	po;

	va_start(po, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(po, int));
		if(i < n - 1 && separator != NULL)
			printf("%s", separator);

	}
	printf("\n");
	va_end(po);
}
