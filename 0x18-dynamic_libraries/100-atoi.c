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
	int sign = 1;
	unsigned int result = 0;
	char null_flag = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;

		if (*s >= '0' && *s <= '9')
		{
			null_flag = 1;
			result = result * 10 + *s - '0';
		}

		else if (null_flag)
			break;
		s++;
	}

	if (sign < 0)
		result *= -1;
	return (result);
}
