#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: first integer
 * @b: second integer
 * void: nothing to return
 */
void swap_int(int *a, int *b)
{
	int temp = 0;
	temp = *a;
	*a = *b;
	*b = *a;
}
