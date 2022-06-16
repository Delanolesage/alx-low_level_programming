#include "main.h"
#include <string.h>

/**
 * _puts - prints a string followed by a new line
 * @str: string to print
 * void: nothing to return
 */
void _puts(char *str)
{
	int i;
	int len = strlen(str);

	for (i = 0; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
