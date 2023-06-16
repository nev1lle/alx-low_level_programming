#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: the number whose factorial is to be returned
 *
 * Return: If n < 0 - return -1 to indicate an error
 *         Otherwise - return factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0 || n == 1)
		return (1);

	return (n * factorial(n - 1));

}
