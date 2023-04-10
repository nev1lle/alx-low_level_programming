#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a
 *                  square matrix of integers.
 * @a: the square matrix of integers whose sum of diagonals is to be printed
 * @size: the size of the square matrix
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i); /**
					      * pointer arithmetic and row major
					      * order
					      */
		sum2 += *(a + i * size + (size - i - 1));
	}

	printf("%d, %d", sum1, sum2);
	printf("\n");
}
