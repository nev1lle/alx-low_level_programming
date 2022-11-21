#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including the terminating null
 * byte (\0), to the buffer pointed to by dest.
 * @dest: pointer to a buffer
 * @src: pointer to a string
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	
	return (dest);
}
