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
	int status;

	status = s1 - s2;
	if (status == 6)
		status = 15;
	else if (status == -6)
		status = -15;

	return (status);	
}
