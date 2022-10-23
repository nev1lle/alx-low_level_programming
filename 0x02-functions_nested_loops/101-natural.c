#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples of
 * 3 or 5 below 1024 (excluded), followed by a new line.
 * Return: 0 if successful
 */
int main(void)
{
	unsigned long int sum3, sum5, sum;
	int i; /* int i reps the multiple of 3 or 5 */

	sum3 = 0;
	sum5 = 0;
	sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0)
		{
			sum3 = sum3 + i; /*subsequent summation of multiples*/
		} else if ((i % 5) == 0)
		{
			sum5 = sum5 + i; /*subsequent summation of multiples*/
		}
	}
	sum = sum3 + sum5;
	printf("%lu\n", sum);
	return (0);
}
