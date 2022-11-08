#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: points to the 1st integer whose value is to be swapped with the 2nd's
 * @b: points to the 2nd integer whose value is to be swapped with the 1st's
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
