#include <stdlib.h>
#include <stdio.h>
#include "./main.h"
/* more headers goes there */

/**
 * main - Program entry point
 *
 * Return: 0 on success. Error code otherwise
 */
int main(void)
{
	char ch[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\n'};
	int length = sizeof(ch) / sizeof(char);
	int i;
	for (i = 0; i < length; i++)
		_putchar(ch[i]);
	return (0);
}
