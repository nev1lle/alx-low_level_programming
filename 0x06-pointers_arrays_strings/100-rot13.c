#include "main.h"

/**
 * *rot13 - encodes a string using rot13.
 * @str: the string to encode using rot13
 * Return: the string encoded using rot13
 */
char *rot13(char *str)
{
	int i, j;

	char first[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char second[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; first[j] != '\0'; j++)
		{
			if (str[i] == first[j])
			{
				str[i] = second[j];
				break;
			}
		}
	}

	return (str);
}
