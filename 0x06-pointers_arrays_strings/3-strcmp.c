#include "main.h"
#include <string.h>

/**
 * _strncmp - compares two strings.
 * @s1: the firdt string
 * @s2 the second string
 * 
 * Return: the copied string
 */
int _strcmp(char *s1, char *s2)
{
	int i, status;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if(s1[i] != s2[i])
		{
			status = s1[i] - s2[i];
			return status;
		}
		else
		{
			status = 0;
		}
	}
	return (status);
}
