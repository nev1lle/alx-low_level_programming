#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line
 * Return: 0 if successful
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
