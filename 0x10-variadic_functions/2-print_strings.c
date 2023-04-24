#include "variadic_functions.h"
/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: pointer char
 * @n: number of arg
 * @...: string to print
 *
 * Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	char *str;
	va_list po;

	if (!n)
	{
		printf("\n");
		return;
	}

	va_start(po, n);

	while (i--)
		printf("%s%s", (str = va_arg(po, char *)) ?
				str : "(nil)", i ? (separator ? separator : "") : "\n");

	va_end(po);
}
