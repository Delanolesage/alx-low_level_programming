#include <stdio.h>

/**
 * main - prints the program's name
 * @argc: number of command line arguments
 * @argv: array of value command line arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
