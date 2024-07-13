#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer of type listint_t to the head of the linked list
 * @index: index of the node, starting at 0
 *
 * Return: 1. nth node of a listint_t linked list.
 *           2. NULL, if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current = head;

	while (current && i < index)
	{
		current = current->next;
		i++;
	}

	return (current);
}
