#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings.
 * @dest: the destination string
 * @src: the source string
 * @n: number of bytes from src
 * Return: the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, lenDest;

	lenDest = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[lenDest + i] = src[i];
	}
	dest[lenDest + i] = '\0';
	return (dest);
}
