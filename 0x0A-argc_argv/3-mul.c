#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies 2 numbers and prints the result of the multiplication,
 * followed by a new line.
 * @argc: argument count
 * @argv: array of pointers to strings which are the arguments.
 *
 * Description: If the program does not receive two arguments,
 * your program should print Error, followed by a new line, and return 1
 *
 * Return: 0 if successful, 1 if otherwise.
 */
int main(int argc, char *argv[])
{
	int mul = 0;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		puts("Error");
		return (1);
	}

	return (0);

}
