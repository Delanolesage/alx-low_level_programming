#include "main.h"

/**
 * print_times_table - print times table
 * @n: the time
 *
 * void function: nothing to return
 */
void print_times_table(int n)
{
	int x, y, z, k, l;

	if (n > 0 || n < 15)
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				z = x * y;
				if (z == 0 && y == 0)
					_putchar(z + '0');
				else if (z > 9)
				{
					k = z % 10;
					z /= 10;
					_putchar(',');
					_putchar(' ');
					_putchar(z + '0');
					_putchar(k + '0');
				}
				else if (z > 99)
				{
					k = z % 10;
					z /= 10;
					l /= 100;
					_putchar(',');
					_putchar(' ');
					_putchar(z + '0');
					_putchar(k + '0');
					_putchar(l + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(z + '0');
				}
			}
			_putchar('\n');
		}
	}
}
