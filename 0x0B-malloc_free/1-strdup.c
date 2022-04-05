#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the given string
 *
 * Return: the pointer to the duplicated string, and NULL if insufficient memory
 */
char *_strdup(char *str)
{
	int len, i;
	char *a = NULL;

	len = strlen(str);
	if (str == NULL)
		return (NULL);

	while(a == NULL)
		a = malloc(len * sizeof(char));

	for (i = 0; i < len; i++)
		*(a + i) = *(str + i);

	return (a);
}
