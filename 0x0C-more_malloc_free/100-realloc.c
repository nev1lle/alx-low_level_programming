#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block by using malloc and free
 * @ptr: poointer to the memory previoously allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 * Return: pointer to new allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p1;
	char *old_p;
	unsigned int a;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	p1 = malloc(new_size);
	if (!p1)
		return (NULL);

	old_p = ptr;

	if (new_size < old_size)
	{
		for (a = 0; a < new_size; a++)
			p1[a] = old_p[a];
	}

	if (new_size > old_size)
	{
		for (a = 0; a < old_size; a++)
			p1[a] = old_p[a];
	}

	free(ptr);
	return (p1);
}
