#include "main.h"
#include <string.h>

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line
 * @a: the array
 * @n: the number of elements to print
 * void: nothing to return
 */
void print_array(int *a, int n)
{
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n)
			printf(", ");
	}
	_putchar('\n');
}
