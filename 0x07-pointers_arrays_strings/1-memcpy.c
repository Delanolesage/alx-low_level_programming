#include "main.h"
#include <string.h>

/**
 * _memcpy - copies memory area.
 * @dest: the destination  memory area
 * @src: the source memory area
 * @n: the number of bytes of the src memory to be copied
 *
 * Return: the new copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n && dest[i] != '\0' && src[i] != '\0'; i++)
		dest[i] = src[i];

	return (dest);
}
