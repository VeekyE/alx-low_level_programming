#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: prints doub;e digit from 00 - 99
 */

int main(void)
{
	int n;
	int z;
	int y;
	int p;
	int p1;
	int p2;

	for (p = 48; p < 58; p++)
	{
		for (y = 48; y < 57; y++)
		{
			for (z = 48; z < 58; z++)
			{
				for (n = 48; n < 58; n++)
				{
					p1 = (p * 10) + y;
					p2 = (z * 10) + n;
					if (p1 < p2)
					{
						putchar(p);
						putchar(y);
						putchar(' ');
						putchar(z);
						putchar(n);
						if (p == 57 && y == 56 && z == 57 && n == 57)
						{
							break;
						}
						putchar(',');
						putchar(' ');

					}
				}
			}
		}
	}
	return (0);
}

