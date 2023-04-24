#include "variadic_functions.h"

/**
 * sum_them_all -  function that returns the sum of all its parameters
 * @n: number of arg
 * @...: the int to sum
 *
 * Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	int i = n;

	va_list po;


	if (!n)
		return (0);

	va_start(po, n);
	while (i--)
		sum += va_arg(po, int);

	va_end(po);
	return (sum);
}
