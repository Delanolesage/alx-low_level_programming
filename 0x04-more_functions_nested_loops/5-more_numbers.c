#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14 for 10 times
 *
 * void: nothing to return
 */
void more_numbers(void)
{
	int i, j, k;

	k = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 14; j++)
		{
			k = j % 10;
			if (j < 10)
				_putchar('1');
			_putchar(k + '0');
	}
	_putchar('\n');
}
