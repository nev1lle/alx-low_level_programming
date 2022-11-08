#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: the pointer to a string
 */
void _puts(char *str) /** *str = *(name of array) = accesses 1st element of
			* string
			*/
{
	int i = 0; /* i = nth element of string */

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}


