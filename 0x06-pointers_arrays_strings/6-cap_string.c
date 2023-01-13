#include "main.h"

/**
 * *cap_string - capitalizes all words of a string.
 * @str: string whose words are to be capitalized
 * Return: the string whose words are capitalized.
 */
char *cap_string(char *str)
{
	int i = 0;


	while (str[i] != '\0')
	{

		if (str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] ==
				'\n' || str[i - 1] == ',' || str[i - 1] == ';'
				|| str[i - 1] == '.' || str[i - 1] == '!' ||
				str[i - 1] == '?' || str[i - 1] == '"' || str[i
				- 1] == '(' || str[i - 1] == ')' || str[i - 1]
				== '{' || str[i - 1] == '}' || i == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}

		i++;
	}

	return (str);
}
