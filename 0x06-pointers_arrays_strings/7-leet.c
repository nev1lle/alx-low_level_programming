#include "main.h"

/**
 * *leet - encodes a string into 1337(leet).
 * @str: the string to be encoded into 1337
 * Return: the string that has been encoded into 1337
 */
char *leet(char *str)
{
	int i = 0;
	int j;
	char letter[] = "aAeEoOtTlL";
	char number[] = "43071";

	for (i = 0; str[i] != '\0'; i++)
		{
			for (j = 0; j < 10; j++)
			{
				if (str[i] == letter[j] || str[i] - 32 ==
						letter[j])
					str[i] = number[j / 2];
			}
		}

	return (str);
}
				
