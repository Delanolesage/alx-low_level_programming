#include <stdio.h>
/**
 * main - prints all passed arguments
 * @argc: number of arguments
 * @argv: array of arguments's value
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
