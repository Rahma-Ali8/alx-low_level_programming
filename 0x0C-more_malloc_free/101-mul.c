#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str: pointer
 * Return: void
*/

void _puts(char *str)
{
	int i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * atoi - convert a string to an integer
 * @s: char
 * Return: int
*/


int atoi(const char *s)
{
	int sign = 1;
	unsigned long int resp = 0, first, i;

	for (first = 0; !(s[first] >= 48 && s[first] <= 57; first++))
	{
		if (s[first] == '-')
		{
			sign *= -1;
		}
	}

	for (i = first; s[i] >= 48 && s[i] <= 57; i++)
	{
		resp *= 10;
		resp += (s[i] - 48);
	}

	return (sign * resp);
}

/**
 * print_int - prints an integer
 * @n: int
 * Return: 0
*/

void print_int(unsigned long int n)
{
	unsigned long int divisor = 1, i, resp;

	for (i = 0; n / divisor > 9; i++, divisor *= 10)
		;

	for (; divisor >= 1; n %= divisor, divisor /= 10)
	{
		resp = n / divisor;
		_putchar('0' + resp);
	}

}

/***/



