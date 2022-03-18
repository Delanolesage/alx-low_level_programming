#include "main.h"

/**
 * print_triangle - prints a triangle followed by anew line
 * @size: the size of the square
 * void: nothing to return
 */
void print_triangle(int size)
{
	int i, j, k, l;

	k = size;
	l = 0;
	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < k - 1; j++)
				_putchar(' ');
			for (i = 0; i <= l; i++)
				_putchar('#');
			l++;
			k--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
