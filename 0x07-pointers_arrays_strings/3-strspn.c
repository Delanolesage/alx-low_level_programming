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
	unsigned int n, i, j;
       
	i = 0;
	j = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
			}
			j++;
		}
		i++;
		if (accept[j] == '\0')
			break;
	}

	return (n);
}
