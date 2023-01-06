#include "main.h"

/**
 * *_strncat - appends the src string to the dest string
 * @dest: the destination string to be appended to.
 * @src: the source string to append to dest
 * @n: no. of bytes used from src
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int dest_length = 0;

	while (dest[i++])
		dest_length++;

	for (i = 0; i < n && src[i]; i++)
		dest[dest_length++] = src[i];

	return (dest);
}
