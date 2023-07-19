#include "main.h"
#include <stdio.h>

/**
 * main - prints number of arguments passed into it., followed by a new line.
 * @argc: argument count
 * @argv: array of pointers to strings which are the arguments
 *
 * Return: 0 if successful, non_zero if otherwise
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
