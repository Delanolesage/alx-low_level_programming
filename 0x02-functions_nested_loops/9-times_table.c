#include "main.h"

/**
 * times_table - print the 9 times table
 *
 * void function: nothing to return just print
 */
void times_table(void)
{
	int x = 0; /* factor */
	int y; /* count  */
	int z; /* computed value */

	while (x < 10)
	{
		y = 0;
		while (y < 10)
		{
			z = x * y;

			if (z > 9)
			{
				_putchar(z / 10 + '0');
				_putchar(z % 10 + '0');
			}
			else if (y != 0)
			{
				_putchar(' ');
				_putchar(z + '0');
			}
			else
			{
				_putchar(z + '0');
			}

			if (y != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			y++;
		}
		_putchar('\n');
		x++;
	}
}
