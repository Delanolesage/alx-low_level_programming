#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int len;

	len = sizeof(s) / sizeof(*s);
	return (len);
}
