#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers & prints the result, followed by a new line
 * @argc: argument count
 * @argv: array of pointers to strings which are the arguments.
 *
 * Description: 1. If no number is passed to the program, print 0,
 *              followed by a new line
 *              2. If one of the numbers contains symbols that are not digits,
 *              print Error, followed by a new line, and return 1
 *
 * Return: 0 if successful, 1 if otherwise.
 */
int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;
	char *arg;

	if (argc == 1)
	{
		printf("%d\n", sum);
		return (0);
	}

	else
	{
		for (i = 1; i < argc; i++)
		{
			arg = argv[i];
			for (j = 0; arg[j] != '\0'; j++)
			{
				if (!isdigit(arg[j]))
				{
					puts("Error");
					return (1);
				}
			}

			sum += atoi(argv[i]);
		}

		printf("%d\n", sum);
	}

	return (0);
}

