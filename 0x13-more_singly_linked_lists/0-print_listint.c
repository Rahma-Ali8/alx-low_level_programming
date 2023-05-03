#include "lists.h"

/**
 * print_listint -  function that prints all the elements of a listint_t list.
 * @h: the first pointer in the nodes
 *
 * Return: size of list
*/

size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		x++;
	}
	return (x);

}
