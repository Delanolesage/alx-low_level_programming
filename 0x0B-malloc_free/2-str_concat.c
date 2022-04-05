#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 *
 * Return: the pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int len1, len2, i, j;

	if (s1 == NULL)
		s1 = "";
	else
		len1 = strlen(s1);

	if (s2 == NULL)
		s2 = "";
	else
		len2 = strlen(s2);

	s = malloc((len1 + len2 + 1) * sizeof(char));
	if (s == NULL)
		return (0);

	for (i = 0; i < len1; i++)
		*(s + i) = *(s1 + i);

	j = 0;
	while (i <= (len1 + len2))
	{
		*(s + i) = *(s2 + j);
		i++;
		j++;
	}

	return (s);

}
