#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: the memory area
 * @b: the byte to fill with
 * @n: the number of bytes of the memory to fill
 *
 * Return: the filled memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
