#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _atoi - converts a string to an integer.
 * @s: the string to be converted
 * Return: the integer
 */
int _atoi(char *s)
{
	int i, j, k, l, minus, countInt, size, result;
	char *str;

	minus = 0;
	countInt = 0;
	l = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] <= '9' && s[i] >= '0')
			countInt++;
	}

	size = countInt - 1;

	*str = (char *) malloc(sizeof(char) * size);

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			minus++;
		}
		if (s[i] == ';')
			break;
		if (s[i] <= '9' && s[i] >= '0')
		{
			str[l++] = s[i];
		}
	}

	if (countInt == 0)
		result = 0;
	else
	{
		for (j = 0; j < l; j++)
		{
			int p = 1;

			for (k = l - 1 + j; k < l; k++)
			{
				p *= 10;
			}
			result += (str[j] - '0') * p;
		}
		if (minus % 2 != 0)
			result *= -1;
	}
	return (result);
}
