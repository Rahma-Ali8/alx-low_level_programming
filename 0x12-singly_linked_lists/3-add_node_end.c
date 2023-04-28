#include "lists.h"
/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: address of pointer
 * @str: node
 *
 * Return: size of list
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end_node = malloc(sizeof(list_t));
	list_t *node = *head;

	if (!head || !end_node)
		return (NULL);

	if (str)
	{
		end_node->str = strdup(str);
		if (!end_node->str)
		{
			free(end_node);
			return (NULL);
		}
		end_node->len = _strlen(end_node->str);

	}
	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = end_node;
	}
	else
		*head = end_node;
	return (end_node);
}
