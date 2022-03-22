#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character of a string,
 * starting with the first character followed by a new line
 * @str: string to print
 * void: nothing to return
 */
void puts2(char *str)
{
	int i, len;

	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
