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
	int i, j, lenS1, lenS2, status;

	lenS1 = strlen(s1);
	lenS2 = strlen(s2);
	status = -1;
	j = 0;

	if (lenS1 < lenS2)
		status = -15;
	else if (lenS1 > lenS2)
		status = 15;
	else
	{
		for (i = 0; i <  lenS1 && s1[i] != '\0'; i++)
		{
			if(s1[i] == s2[i])
				j++;
			else if(s1[i] < s2[i])
			{
				status = -15;
			}
			else
			{
				status = 15;
			}
		}
		if (j == lenS1)
			status = 0;
	}
	return (status);
}
