#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet 10 times
 *
 * void function: nothing to return
 */
void print_alphabet_x10(void)
{
	char a = 'a';
	int n = 0;

	while (n < 10)
	{
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		a = 'a';
		n++;
		_putchar('\n');
	}
}
