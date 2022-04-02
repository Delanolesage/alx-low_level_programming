#include "main.h"
#include <string.h>

/**
 * _strcmp - compares two strings.
 * @s1: the first string
 * @s2: the second string
 *
 * Return: the copied string
 */
int _strcmp(char *s1, char *s2)
{
	int status, i;

	status = 0;
	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			status = s1[i] - s2[i];
			break;
		}
	}

	return (status);
}
