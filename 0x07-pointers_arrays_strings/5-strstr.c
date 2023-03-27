#include "main.h"

/**
 * *_strstr - finds the first occurrence of the substring 'needle'
 * in the string 'haystack'.
 * @haystack: the string to search for the occurrence of substring 'needle'.
 * @needle: the substring to be searched for in the string 'haystack'.
 * Return: 1. pointer to the beginning of the located substring - if substring
 *            is found.
 *         2. NULL - if substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack); /**
				    * because an empty string is always considered
				    * to be a substring of any string.
				    */

	while (*haystack)
	{
		i = 0;

		while (haystack[i] == needle[i])
		{
			if (needle[i + 1] == '\0')
				return (haystack);

			i++;
		}

		haystack++;
	}

	return (0);
}
