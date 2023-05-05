#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: unsigned long int to be printed in binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int j, add = 0;
	unsigned long int new;

	for (j = 63; j >= 0; j--)
	{
		new = n >> j;

		if (new & 1)
		{
			_putchar('1');
			add++;
		}
		else if (add)
			_putchar('0');
	}
	if (!add)
		_putchar('0');
}
