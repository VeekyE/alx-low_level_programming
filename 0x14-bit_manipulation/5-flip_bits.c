#include "main.h"
#include <stdio.h>
/**
 * flip_bits - returns the number of bits you would need to flip to get from
 *             one number to another
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits you would need to flip to get from one number to
 *         another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int num_flipped_bits = 0;

	while (xor_result)
	{
		if (xor_result & 1)
			num_flipped_bits++;

		xor_result >>= 1;
	}

	return (num_flipped_bits);
}
