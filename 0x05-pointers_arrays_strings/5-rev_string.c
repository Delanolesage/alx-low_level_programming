#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to print
 * void: nothing to return
 */
void rev_string(char *s)
{
	int j, len;
	char tmp;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	j = 0;
	for (len = len - 1; j < len; j++, len--)
	{
		tmp = s[len];
		s[len] = s[j];
		s[j] = tmp;
	}
}
