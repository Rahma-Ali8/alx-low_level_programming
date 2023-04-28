#include "lists.h"
/**
 * free_list - function that frees a list_t list
 * @head: pointer
 *
 * Return: Nothing
*/

void free_list(list_t *head)
{
	list_t *node, *next_node;

	if (!head)
		return;
	node = head;

	while (node)
	{
		next_node = node->next;
		free(node->str);
		free(node->next);
		node = next_node;
	}
}
