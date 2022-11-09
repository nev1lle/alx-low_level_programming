#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: the pointer to the string to be printed in reverse
 */
void print_rev(char *s)
{
	int arraysize = 0;
	int i = (arraysize - 1);

	while (*s != '\0')
	{
		arraysize++;
		s++;
	}
	while (s[i])
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
