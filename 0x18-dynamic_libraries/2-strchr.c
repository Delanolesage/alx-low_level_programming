#include "main.h"
#include <string.h>

/**
 * _strchr - locates a character in a string.
 * @s: the string
 * @c: the character to locate
 *
 * Return: a pointer to the first occurence of the character
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
		return (s);

	return (NULL);
}
