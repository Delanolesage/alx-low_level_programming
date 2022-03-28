#include "main.h"
#include <string.h>

/**
 * set_string - sets the value of a pointer to a char.
 * @s: the string
 * @to: the character
 *
 * Void: nothing to return
 */
void set_string(char **s, char *to)
{
	*s = to;
}
