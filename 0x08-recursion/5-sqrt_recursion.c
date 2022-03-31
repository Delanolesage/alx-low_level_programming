#include "main.h"

/**
 * _sqrt - returns sqrt
 * @n: the integer
 * @i: value to be tested
 *
 * Return: the sqrt
 */
int _sqrt(int n, int i)
{
	if (n < 0)
	{
		return (-1);
	}
	if ((i * i) > n)
	{
		return (-1);
	}
	if ((i * i) == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - returns square root of a natural number
 * @n: the number to find sqrt
 *
 * Return: sqrt,(-1) no natural sqrt
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
