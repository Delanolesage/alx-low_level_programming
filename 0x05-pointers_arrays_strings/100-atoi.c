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
	int i, j, k, l, n, p, minus, countInt, result;

	minus = 0;
	countInt = 0;
	l = 0;
	n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ';')
			break;
		if (s[i] <= '9' && s[i] >= '0')
			countInt++;
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			minus++;
		if (s[i] == ';')
			break;
		if (s[i] <= '9' && s[i] >= '0')
			s[l++] = s[i];
	}

	if (countInt == 0)
		result = 0;
	else
	{
		for (j = l - 1; j >= 0; j--)
		{
			p = 1;

			for (k = 1; k <= j; k++)
				p *= 10;
			result += (s[n] - '0') * p;
			n++;
		}
		if (minus % 2 != 0)
			result *= -1;
	}
	return (result);
}
