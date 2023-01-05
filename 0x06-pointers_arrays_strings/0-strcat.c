#include "main.h"

/**
 * *_strcat - appends the src string to the dest string, overwriting the
 * terminating null byte (\0) at the end of dest, and then adds a terminating
 * null byte
 * @dest: pointer to the dest string to be concatenated upon
 * @src: pointer to the src string to be appended to @dest
 * Return: a pointer to the resulting string dest(*dest)
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int dest_length = 0;

	while (dest[i++])
		dest_length++;

	for (i = 0; src[i]; i++)
		dest[dest_length++] = src[i];

	return (dest);
}
