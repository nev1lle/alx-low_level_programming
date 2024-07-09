#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer to a pointer of type listint_t to the head of a linked list
 *
 * Description: The function sets the head to NULL
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL) /* to avoid dereferencing a NULL pointer. */
		return;

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
