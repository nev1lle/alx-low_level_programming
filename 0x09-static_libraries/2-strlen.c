#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: pointer to string whose length is to be returned.
 * Return: length of a string.
 */
int _strlen(char *s)
{
	int lengthcount = 0;

	while (s[lengthcount])
		lengthcount++;
	
	return (lengthcount);
}
