#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: the pointer to the string to be printed in reverse
 */
void print_rev(char *s)
{
	int lengthcount = 0;
	int i = (lengthcount - 1);

	while (*s != '\0')
	{
		lengthcount++;
		s++;
	}

	while (s[i])
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
