#include "main.h"

/**
 * print_number - prints n integer
 * @n: the number to print
 * void: nothing to return
 */
void print_number(int n)
{
	unsigned int j;

	if (n < 0)
	{
		j = -n;
		_putchar('-');
	}
	else
	{
		j = n;
	}
	if (j / 10)
	{
		print_number(j / 10);
	}
	_putchar(j % 10 + '0');
}
