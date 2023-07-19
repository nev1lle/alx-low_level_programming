#include "main.h"
#include <stdio.h>

/**
 * main - prints program name, followed by a new line.
 * @argc: argument count
 * @argv: array of pointers to strings which are the arguments
 *
 * Description: If you rename the program, it will print the new name,
 * without having to compile it again
 * Return: 0 if successful, non_zero if otherwise
 */
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);

	return (0);
}
