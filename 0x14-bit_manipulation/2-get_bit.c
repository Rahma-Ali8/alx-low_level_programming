#include <stdio.h>
#include <main.h>


/**
 * get_bit -  a function that returns the value of a bit at a given index.
 * @n: given number
 * @index: position of number
 *
 * Return: value of bits
*/

int get_bit(unsigned long int n, unsigned int index)
{
	int *bit = malloc(sizeof(int) * index);


	int i;

	for (i = 0; i < index; i++)
	{
		int x = 1 << i;
		int xp = n & x;

		int p = xp >> i;

		bit[i] = p;

	}

	return (bit);

}
