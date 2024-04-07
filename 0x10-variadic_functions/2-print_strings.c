#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings -  prints strings, followed by a new line.
 * @separator: string to be printed between the strings(a pointer)
 * @n: number of strings passed to the function
 *
 * Description: 1. If separator is NULL, don’t print it
 *              2. If one of the string is NULL, print (nil) instead
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *str;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);

		if (!str)
			printf("(nil)");
		if (!separator)
			printf("%s", str);
		else if (i == 0)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
	}

	va_end(strings);

	printf("\n");

}
