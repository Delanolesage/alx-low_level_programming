#include "main.h"
#include <string.h>

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @s: the string
 *
 * Return: the changed string
 */
char *string_toupper(char *s)
{
	int i, len;

	len = strlen(s);

	for (i = 0; i <  len && s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
	}
	return (s);
}
