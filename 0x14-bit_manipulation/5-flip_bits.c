#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get from
 * one number to another.
 * @n: 1st number
 * @m: 2nd number
 *
 * Return: the number of bits you would need to flip to get from one
 * number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned long int count = 0;

	while (result > 0)
	{
		if (result & 1) /* checks if least significant bit is 1 */
			count++;

		result >>= 1;
	}

	return (count);
}
