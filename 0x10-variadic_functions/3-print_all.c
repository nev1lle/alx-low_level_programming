#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: constant pointer to a list of types of arguments passed to the
 *		function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *string, *sep = "";

	va_list types;

	va_start(types, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(types, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(types, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(types, double));
					break;
				case 's':
					string = va_arg(types, char *);
					if (!string)
						string = "(nil)";
					printf("%s%s", sep, string);
					break;
				default:
					i++;
					continue;

			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(types);
}
