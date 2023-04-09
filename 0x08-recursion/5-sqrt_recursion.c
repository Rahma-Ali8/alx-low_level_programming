#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: int
 * @x: int
 * Return: int
*/
int square(int n, int x);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - find sqrt
 * @n: int
 * @x: int
 * Return: int
*/

int square(int n, int x)
{
	if (x * x == n)
		return (x);
	else if (x * x < n)
		return (square(n, x + 1));
	else
		return (-1);
}
