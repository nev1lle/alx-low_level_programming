#include "main.h"

/**
 * *rot13 - encodes a string using rot13.
 * @str: the string to encode using rot13
 * Return: the string encoded using rot13
 */
char *rot13(char *str)
{
	int i, j;
	char 1st[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char 2nd[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == 1st[j])
				str[i] = 2nd[j];
		}
	}

	return (str);
}
