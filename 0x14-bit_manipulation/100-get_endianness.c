#include "main.h"

/**
 * get_endianness - checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int value = 0x1;
	char *r = (char *) &value;

	if (*r == 1)
		return (1);

	return (0);
}
