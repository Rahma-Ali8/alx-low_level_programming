#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * @head: pointer to the first node
 *
 * Return: data of head node
*/

int pop_listint(listint_t **head)
{
	listint_t *node;
	int x;

	if (!head || !*head)
		return (0);

	node = (*head)->next;
	x = (*head)->x;
	free(*head);
	*head = node;
	return (x);
}
