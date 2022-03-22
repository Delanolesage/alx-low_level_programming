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
	int i, len, l;

	len = strlen(str);
	if (len % 2 == 0)
	{
		l = len / 2;
	}
	else
	{
		l = ((len - 1) / 2) + 1;
	}

	for (i = l; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
