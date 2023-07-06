#include "main.h"

/**
 * _sqrt_helper - helps check for square root of a number
 * @a: the number to confirm if it's the square root
 * @b: the square whose square root is to be found
 *
 * Return: the square root
 */
int _sqrt_helper(int a, int b)
{
	if (a * a == b)
		return (a);

	if (a * a > b)
		return (-1);

	return (_sqrt_helper(a + 1, b));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number whose square root is to be gotten
 *
 * Return: the natural square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt_helper(0, n));
}
