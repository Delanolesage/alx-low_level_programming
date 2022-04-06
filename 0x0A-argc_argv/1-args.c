#include <stdio.h>
/**
 * main - prints the number of passed arguments
 * @argc: number of arguments
 * @argv: array of arguments's value
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}
