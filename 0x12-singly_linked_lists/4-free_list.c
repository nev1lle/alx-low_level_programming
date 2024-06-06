#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: a pointer to a list_t object
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);

		head = head->next;
	}
}
