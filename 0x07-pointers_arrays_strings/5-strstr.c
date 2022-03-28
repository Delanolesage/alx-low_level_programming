#include "main.h"
#include <string.h>

/**
 * _strstr - finds the first occurence of the substring needle
 * in the string haystack.
 * @haystack: the string where to search
 * @needle: the string with character to find
 *
 * Return: a pointer to the beginning of the located substring
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *result = haystack;
	char *fneedle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack != *needle)
				break;
		}
		if (!*needle)
			return (result);

		needle = fneedle;
		result++;
		haystack = result;
	}
	return (NULL);
}
