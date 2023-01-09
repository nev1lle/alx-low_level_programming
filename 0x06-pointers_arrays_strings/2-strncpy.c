#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: the destination buffer
 * @src: the string to copy to dest
 * @n: no. of bytes of src to copy
 * Return: pointer to the destination string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
