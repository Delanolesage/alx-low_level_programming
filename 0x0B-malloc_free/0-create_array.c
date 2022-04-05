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
	char *a = NULL;

	if (size == 0)
		return (0);

	while (a == NULL)
		a = malloc((size) * sizeof(char));

	for (i = 0; i < size; i++)
		*(a + i) = c;
	return (a);
}
