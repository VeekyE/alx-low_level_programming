#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  get_endianness - checks the endianness
 *
 *  Return 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int z;
	char *c;

	z = 1;
	c = (char *)&z;

	return ((int)*c);
}
