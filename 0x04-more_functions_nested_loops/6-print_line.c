#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: number of times the character _ should be printed
 */
void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;

		i = 1;
		
		while (i <= n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
}
