#include <stdio.h>
 /**
  * main -Entry point
  *Description: loop numbers by for loop.
  * Return: Always 0 (Success)
  */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);
	putchar('\n');
	return (0);
}
