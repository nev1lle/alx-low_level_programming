#include "main.h"

int palindromecheck(char *s, int i, int length);
int _strlen_recursion(char *s);

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: string to reverse
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (palindromecheck(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length of
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * palindromecheck - checks the characters recursively for palindrome
 * @s: string to check
 * @i: iterator
 * @length: length of the string
 * Return: 1 if palindrome, 0 if not
 */
int palindromecheck(char *s, int i, int length)
{
	if (*(s + i) != *(s + length - 1))
		return (0);
	if (i >= length)
		return (1);
	return (palindromecheck(s, i + 1, length - 1));
}
