#include "main.h"
#include <string.h>
#include <math.h>

/**
 * _atoi - converts a string to an integer.
 * @dest: the string to be converted
 * Return: the integer
 */
int _atoi(char *s)
{
	int i, j, len, minus, plus, countInt, result;
	char *res;

	len = strlen(s);
	plus = 0;
	minus = 0;
	countInt = 0;
	res = " ";

	for (i = 0; i < len; i++)
	{
		if (s[i] == ';')
			break;
		if (s[i] == '+')
			plus++;
		if (s[i] == '-')
			minus++;
		if (s[i] <= 9 || s[i] >= 0)
		{
			res[countInt] = s[i];
			countInt++;
		}
	}
	if(countInt == 0)
		result = 0;
	else
	{
		for (j = 0; j <= countInt - 2; j++)
			result += res[j] * (int) pow(10, (countInt - 2 - j));
		if (minus % 2 != 0)
			result *= -1;
	}
	return (result);
}
