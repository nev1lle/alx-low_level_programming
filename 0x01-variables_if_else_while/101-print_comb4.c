#include <stdio.h>

/**
 * main - a program that prints all possible different combinations of three
 * digits, separated by (,), followed by a space
 * Return: 0 if successful
 */
int main(void)
{
	int n, m, p;

	for (n = 48; n < 58; n++)
	{
		for (m = 49; m < 58; m++)
		{
			for (p = 50; p < 58; p++)
			{
				if (p > m && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(p);
					if (n != 55 || m != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

