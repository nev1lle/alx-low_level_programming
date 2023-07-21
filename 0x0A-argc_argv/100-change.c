#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an
 * amount of money.
 * @argc: argument count
 * @argv: array of pointers to strings which are the arguments.
 *
 * Description: 1. if the number of arguments passed to your program is
 *                 not exactly 1, print Error, followed by a new line,
 *                 and return 1.
 *              2. If the number passed as the argument is negative,
 *                 print 0, followed by a new line
 *
 * Return: 0 if successful, 1 if the number of arguments passed to your
 * program is not exactly 1,
 */
int main(int argc, char *argv[])
{
	int cents;
	int i; /* loop counter for coins */
	int coinnum = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && cents > 0; i++)
	{
		while (cents >= coins[i])
		{
			coinnum++;
			cents -= coins[i];
		}
	}

	printf("%d\n", coinnum);
	return (0);
}
