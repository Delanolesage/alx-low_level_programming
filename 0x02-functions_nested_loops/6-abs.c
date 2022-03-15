#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the number to check
 *
 * Return: 1 if positive, 0 if zero and -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		n *= -1;
	}
	return n;
}
