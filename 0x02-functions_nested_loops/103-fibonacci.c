#include <stdio.h>

/**
 * main - prints the sum of the even-valued terms, followed by a new line.
 * Return: 0 if successful
 */
int main(void)
{
	int i; /* the fibonacci number to print upto */
	long int j, k, next, sum;

	j = 1;
	k = 2;
	sum = 0;

	for (i = 1; i <= 33; i++)
	{
		if (j <= 4000000 && (j % 2) == 0)
		{
			sum = sum + j;
		}
		next = j + k;
		j = k;
		k = next;
	}
	printf("%ld\n", sum);
	return (0);
}
