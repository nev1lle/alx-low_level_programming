#include "main.h"

/**
 * *_strcat - appends the src string to the dest string, overwriting the
 * terminating null byte (\0) at the end of dest, and then adds a terminating
 * null byte
 * @*dest: pointer to the dest string to be concatenated upon
 * @*src: pointer to the src string to be appended to @dest
 * Return: a pointer to the resulting string dest(*dest)
 */
char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
		dest++;

	while (*src != '\0')
		*dest++ = *src++;

	*dest = '\0';
	
	return(dest);
}
