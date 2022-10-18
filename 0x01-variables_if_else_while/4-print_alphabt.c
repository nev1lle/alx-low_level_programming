#include <stdio.h>

/**
 * main - a program that prints the alphabet in lowercase, followed by a new
 * line and omits q and e
 * Return: 0 if successful
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
