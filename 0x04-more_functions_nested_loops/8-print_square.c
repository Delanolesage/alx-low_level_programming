#include "main.h"

/**
 * print_squre - prints a square followed by anew line
 * @size: the size of the square
 * void: nothing to return
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
