#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: the string whose length is to be checked
 *
 * Return: length of the string s
 */
int _strlen_recursion(char *s)
{
	int i = 1;

	if (*s == '\0')
		return (0);

	return (i += _strlen_recursion(s + 1));
}
