#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: a pointer to a pointer of type listint_t to the head of a linked list
 *
 * Return: 1. the head node’s data (n).
 *         2. 0, if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (!head || !*head)
		return (0);

	data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (data);
}

