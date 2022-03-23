#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings.
 * @dest: the destination string
 * @src: the source string
 * Return: the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i, j, lenDest, lenSrc;
	char *newStr;

	lenDest = strlen(dest);
	lenSrc = strlen(src);

	for (i = 0; i < lenDest; i++)
	{
		newStr[i] = dest[i];
	}

	for (j = 0; j < lenSrc; j++)
	{
		newStr[i + j] = src[j];
	}
	newStr[i + j] = '\0';
	return (newStr);
}
