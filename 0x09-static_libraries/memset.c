#include "main.h"

/**
 * *_memset - a function that fills memory with a constant byte.
 * @s: the memory area to be filled
 * @b: the constant character byte to fill the memory area
 * @n: the bytes of the memory area to fill
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
