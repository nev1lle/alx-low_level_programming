#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter.
 * @str: the string
 *
 * Return: 1. NULL if str = NULL
 *         2. if successful, a pointer to the duplicated string
 *         3. NULL if insufficient memory was available.
 */
char *_strdup(char *str)
{
	char *s;
	int i, length = 0;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	s = malloc(sizeof(char) * length + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		s[i] = str[i];

	s[length] = '\0';

	return (s);

}
