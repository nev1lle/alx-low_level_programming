#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: the number of arguments passed to the function
 *
 * Return: the sum of all the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	int addition;
	unsigned int i;
	va_list s;

	va_start(s, n);

	if (n == 0)
		return (0);

	addition = 0;
	for (i = 0; i < n; i++)
		addition += va_arg(s, int);

	va_end(s);

	return (addition);
}
