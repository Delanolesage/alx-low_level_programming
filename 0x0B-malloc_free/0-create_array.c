#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and
 * initíalizes it with a specific char.
 * @size: the size of the array
 * @c: the characters
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
		return (0);

	a = malloc((size) * sizeof(char));
	if (!(*a))
		return (0);

	for (i = 0; i < size; i++)
		*(a + i) = c;
	return (a);
}
