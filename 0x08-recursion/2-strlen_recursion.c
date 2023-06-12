#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: the string whose length is to be returned
 *
 * Return: the length of a string.
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s == '\0')
	{
		return (0);
	}
	length += 1 + _strlen_recursion(s + 1);

	return (length);
}
