#include <stdio.h>
#include <math.h>

/**
 * main - prints the largest prime factor of the number 612852475143,
 * followed by a new line.
 * Return: 0 if successful, non zero otherwise
 */
int main(void)
{
	long int n, max, i;

	n = 612852475143;
	max = 0;

	while (n % 2 == 0)
	{
		max = 2;
		n /= 2; /* short for n = n / 2 & n is reduced by dividing by 2  */
	}

	for (i = 3; i <= sqrt(n); i = i + 2)/**
					     * n is now odd so next prime
					     * factor starts at 3 and limit is
					     * square root of n. i increased by 2
					     * to get only odd numbers
					     */
	{
		while (n % i == 0)
		{
			max = i;
			n = n / i;
		}
	}
	if (n > 2) /* if n is prime no. greater than 2 */
		max = n;

	printf("%ld\n", max);

	return (0);
}
