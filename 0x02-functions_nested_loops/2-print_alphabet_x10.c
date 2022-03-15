#include "main.h"

/**
 * print_alphabet - print the alphabet
 *
 * void function: nothing to return
 */
void print_alphabet_x10(void)
{
	char a = 'a';

  while (n < 10)
  {
    while (a <= 'z')
    {
      _putchar(a);
      a++;
    }
    n++;
    _putchar('\n');
  }
}
