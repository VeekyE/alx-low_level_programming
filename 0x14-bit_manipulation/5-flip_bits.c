#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * flip_bits - returns the number of bits you
 * would need to flip to get from one number to another
 * @n: first number
 * @m: second number
 * Return the number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (j = 64; j >= 0; j--)
	{
		current = exclusive >> j;
		if (current & 1)
			count++;
	}
	return (count);
}
