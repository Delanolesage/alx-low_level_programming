#include "main.h"

/**
 * times_table - print the 9 times table
 *
 * void function: nothing to return just print
 */
void times_table(void)
{
	int n = 0;
	int t = 0;
	int result;

	while (n < 10)
	{
		while (t < 10)
		{
			result = n * t;
			if (t == 0)
				_putchar('0');
			else
			{
				_putchar(' ');
				if ((result / 10) == 0)
				{
					_putchar(' ');
				}
				else
				{
					_putchar((result / 10) + '0');
				}
				_putchar((result % 10) + '0');
			}
			if (t != 9) 
				_putchar(',');
			t++;
		}
		n++;
		_putchar('\n');
	}
}
