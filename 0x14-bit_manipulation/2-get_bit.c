#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_bit - returns the value of a bit at a given index
 * @n: unsigned long int to check the bit in
 * @index: index of the bit to check
 *
 * Return: value of the bit at index index or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1UL << index;
	if ((n & mask) == 0)
		return (0);
	else
		return (1);
}
