#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int lnum, space, sign;

		/* show number of lines */
		for (lnum = 1; lnum <= size; lnum++)
		{
			/* calculate no of spaces */
			for (space = 1; space <= (size - lnum); space++)
			{
				_putchar(' ');
			}
			/* number of # on each linenumber */
			for (sign = 1; sign <= lnum; sign++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

