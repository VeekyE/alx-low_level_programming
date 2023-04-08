#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: string that holds the binary number
 *
 * Return: the converted number, or 0 if there is one or more
 * chars in the string b that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	int m;
	unsigned int decimal_value = 0;

	if (!b)
		return (0);

	for (m = 0; b[m]; m++)
	{
		if (b[m] < '0' || b[m] > '1')
			return (0);
		decimal_value = 2 * decimal_value + (b[m] - '0');
	}
	return (decimal_value);
}
