#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: a pointer of type listint_t to the start of a linked list. 
 */
void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
