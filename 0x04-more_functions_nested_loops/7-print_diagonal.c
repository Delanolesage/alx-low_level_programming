#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: the number of times
 * void: nothing to return
 */
void print_diagonal(int n)
{
	int i;

	if (n > 0)
		for (i = 0; i < n; i++)
		{
			_putchar(' ');
			_putchar('\\');
		}
	_putchar('\n');
}
