#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: 1st string to compare
 * @s2: 2nd string to compare
 * Return: a negative integer, 0, or a positive integer
 * if s1 is found, respectively, to be less than,
 * to be equal, or be greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
