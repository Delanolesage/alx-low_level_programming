#include "main.h"
/**
 * main - Program entry point
 *
 * Return: 0 on success. Error code otherwise
 */
int main(void)
{
	print_alphabet();
	return (0);
}

/**
 *
 * print_alphabet - print the alphabet
 *
 * void function: nothing to return
 */
void print_alphabet(void)
{
	char a = 'a';

	while (a < 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
