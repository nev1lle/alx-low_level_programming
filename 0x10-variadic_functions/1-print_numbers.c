#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: a pointer to a constant character that is string
 *             to be printed between numbers.
 * @n: number of integers passed to the function.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		if (!separator)
			printf("%d", va_arg(numbers, int));

		else if (i == 0)
			printf("%d", va_arg(numbers, int));

		else
			printf("%s%d", separator, va_arg(numbers, int));
	}

	va_end(numbers);

	printf("\n");
}
