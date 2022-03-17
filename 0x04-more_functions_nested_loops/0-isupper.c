#include "main.h"

/**
 * _isupper - checks if a character is lowercase or uppercase
 * @c: the character to compare
 *
 * Return: 1 if uppercase and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' &&  c <= 'Z')
		return (1);
	else
		return (0);
}
