#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_binary - prints the binary representation of a number
 * @n: unsigned long int to be printed in binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int size = sizeof(unsigned long int) * 8 - 1;
	int j;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (size--)
	{
		if ((n >> size) & mask)
			break;
	}

	for (j = size; j >= 0; j--)
	{
		if ((n >> j) & mask)
			_putchar('1');
		else
			_putchar('0');
	}
}

