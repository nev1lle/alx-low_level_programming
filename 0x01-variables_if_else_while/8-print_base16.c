#include <stdio.h>

/**
 * main - a program that prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 * Return: 0 if successful
 */
int main(void)
{
	int n;
	char c;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
