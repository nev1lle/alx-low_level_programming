#include "main.h"

/**
 * print_number - a function that prints an integer
 * @n: the integer to print
 */
void print_number(int n)
{
	unsigned int x;

	x = n;
	if (n < 0)
	{
		_putchar(45);
		x = -n; /* n changed to positive after placing '-' */
	}
	if (n / 10)
		print_number(x / 10); /**
				       * _putchar not used since n/10 might not
				       * be a single character
				       */
	_putchar((x % 10) + '0');/* last digit is output using _putchar */
}
