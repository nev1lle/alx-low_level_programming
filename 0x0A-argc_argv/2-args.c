#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: argument count
 * @argv: array of pointers to strings which are the arguments
 *
 * Description: Only print one argument per line, ending with a new line
 *
 * Return: 0 if successful, non_zero if otherwise
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
