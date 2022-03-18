#include "main.h"

/**
 * print_triangle - prints a triangle followed by anew line
 * @size: the size of the square
 * void: nothing to return
 */
void print_triangle(int size)
{
	int i, j, k, l, m;

	k = size;
	l = 0;
	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < k - 1; j++)
				_putchar(' ');
			for (m = 0; m <= l; m++)
				_putchar('#');
			l++;
			k--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
