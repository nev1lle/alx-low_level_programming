#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a pointer to an unmodifiable string of 0 and 1 chars
 *
 * Return: 1. The converted number
 *         2. Or 0 if:
 *		a. one or more chars in the string b is not 0 o * r 1
 *		b. b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '1' && *b != '0')
			return (0);

		result = (result << 1) + (*b - '0');

		b++;
	}

	return (result);
}
