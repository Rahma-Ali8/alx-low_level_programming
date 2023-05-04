#include "lists.h"

/**
 * delete_nodeint_at_index -  function that deletes the node
 * at index index of a listint_t
 * @head: pointer to the first node
 * @index: index node
 *
 * Return: 1 if success, -1 if failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint *node, *last_node;
	unsigned int x = 0;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}
	node = *head;

	while (node)
	{
		if (x == index)
		{
			last_node->next = node->next;
			free(node);
			return (1);
		}
		x++;
		last_node = node;
		node = node->next;
	}
	return (-1);
}
