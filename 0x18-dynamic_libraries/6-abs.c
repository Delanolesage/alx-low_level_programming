#include "main.h"

/**
 * _abs - gives the absolute value of an integer
 * @n: the number to compute
 *
 * Return: the absolute integer
 */
int _abs(int n)
{
	if (n < 0)
	{
		n *= -1;
	}
	return (n);
}
