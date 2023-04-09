#include "main.h"
#include <stdio.h>

/**
 * is_prime_number -  function that returns 1 if the input integer is
 * a prime number, otherwise return 0
 * @n: int
 * @p: int
 * Return: 0 or 1
*/
int check_prime(int n, int p);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
/**
 * check_prime - check numbers if prime
 * @n: int
 * @p: int
 * Return: int
*/
int check_prime(int n, int p)
{
	if (p >= n && n > 1)
		return (1);
	else if (n % p == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, p + 1));
}
