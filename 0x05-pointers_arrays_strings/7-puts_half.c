#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string,
 * followed by a new line
 * @str: string to print
 * void: nothing to return
 */
void puts_half(char *str)
{
	int i, len;

	len = strlen(str);
	for (i = len / 2; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
