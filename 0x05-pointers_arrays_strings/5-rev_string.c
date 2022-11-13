#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: the pointer to the string to be printed in reverse
 */
void rev_string(char *s)
{
	int lengthcount, i;
	char chtemp; /* holds the value temporarily to prevent overwriting */

	lengthcount = 0;
	while (s[lengthcount])
		lengthcount++;

	for (i = 0; i < (lengthcount / 2); i++) /**
					       * loop runs till half of string for
					       * swapping
					       */
	{
		chtemp = s[i];
		s[i] = s[lengthcount - i - 1];
		s[lengthcount - i - 1] = chtemp;
	}
}
