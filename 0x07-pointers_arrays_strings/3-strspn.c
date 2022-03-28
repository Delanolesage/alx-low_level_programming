#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring.
 * @s: the string to look through
 * @accept: the string to match
 *
 * Return: the length of the prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n;

	n = 0;

	while (*s)
	{
		while (*accept)
		{
			if (*s == *accept)
			{
				n++;
			}
			accept++;
		}
		s++;
		if (!(*--accept))
			break;

	}

	return (n);
}
