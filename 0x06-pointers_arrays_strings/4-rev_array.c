#include "main.h"
#include <string.h>

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: the array to reverse
 * @n: number of elements of the array
 * void: nothing to return
 */
void reverse_array(int *a, int n)
{
	int start, end, tmp;

	start = 0;
	end = n - 1;

	while (start < end)
	{
		tmp = a[start];
		a[start] = a[end];
		a[end] = tmp;
		start++;
		end--;
	}
}
