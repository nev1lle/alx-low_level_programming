#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes.
 * @s: the string to search for the bytes found in the string accept
 * @accept: a string containing set of bytes to check in string s
 * Return: 1. a pointer to the byte in s - if it matches any byte in string
 *                                         accept
 *         2. NULL - if no matching byte to accept is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}

	return (0);
}
