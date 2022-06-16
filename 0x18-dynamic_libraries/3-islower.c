#include "main.h"

/**
 * _islower - checks if a character is lowercase or uppercase
 * @c: the character to compare
 *
 * Return: 1 if lowercase and 0 otherwise
 */
int _islower(int c)
{
	if (c > 'Z')
		return (1);
	else
		return (0);
}
