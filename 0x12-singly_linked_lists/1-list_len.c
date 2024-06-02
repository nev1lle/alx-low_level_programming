#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: a pointer to a list_t object which won't be modified by the function.
 *
 * Return: the number of elements in the linked list
 */
size_t list_len(const list_t *h)
{
	size_t len;

	len = 0;
	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}
