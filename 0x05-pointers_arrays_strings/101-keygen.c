#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme.
 *
 * Return: 0 on success
 */
int main(void)
{
	int pass[50], i, sum = 0, n;

	srand(time(NULL));
	for (i = 0; i < 50; i++)
	{
		pass[i] = rand() % 93;
		sum += (pass[i] + '!');
		putchar(pass[i] + '!');

		if ((2772 - sum) - '!' < 93)
		{
			n = ((2772 - sum) - '!');
			sum += n;
			putchar(n + '!');
			break;
		}
	}
	return (0);
}
