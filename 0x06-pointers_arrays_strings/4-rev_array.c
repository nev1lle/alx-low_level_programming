#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array of integers
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i, tempvalue;

	for (i = 0; i < n / 2; i++)
	{
		tempvalue = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tempvalue;
	}
}
