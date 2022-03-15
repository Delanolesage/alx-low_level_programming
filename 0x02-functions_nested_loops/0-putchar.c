#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Program entry point
 *
 * Return: 0 on success. Error code otherwise
 */
int main(void)
{
	char ch[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	length = sizeof(ch) / sizeof(char);
	for (int i = 0, i < length; i++)
		putchar(ch[i]);
	putchar('\n');
	return (0);
}
