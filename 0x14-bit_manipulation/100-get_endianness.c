#include "main.h"

/**
 * get_endianness -  function that checks the endianness
 *
 * Return: big endian 0, small 1
*/

int get_endianness(void)
{
	unsigned long int n = 1;

	return (*(char *)&n);
}
