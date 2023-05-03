#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: pointer to the first pointer
 *
 * Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *node, *fr;

	if (!head)
		return;
	node = *head;

	while (node)
	{
		fr = node;
		node = node->next;
		free(fr);
	}
	*head = NULL;
}
