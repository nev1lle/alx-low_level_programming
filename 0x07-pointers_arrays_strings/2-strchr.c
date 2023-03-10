#include "main.h"

/**
 * *_strchr - locates a character in a string.
 * @s: the string to check
 * @c: the character to be located
 * Return: 1. a pointer to the first occurrence of character c in the string s
 *         2. NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}

	return ('\0');
}
