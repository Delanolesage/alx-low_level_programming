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
	char *s = NULL;
	int len1, len2, i, j;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 != NULL && s2 == NULL)
		return (s1);
	if (s1 == NULL && s2 != NULL)
		return (s2);

	len1 = strlen(s1);
	len2 = strlen(s2);
	s = malloc((len1 + len2 + 1) * sizeof(char));

	for (i = 0; i < len1; i++)
		*(s + i) = *(s1 + i);
	for (j = len1; j < (len1 + len2); j++)
		*(s + j) = *(s2 + (j - len1));
	*(s + j) = '\0';
	return (s);

}
