#include <stdio.h>
/**
 * main - Program entry point
 *
 * Return: 0 on success. Error code otherwise
 */
int main(void)
{
	int n = 0;

	while (n < 100)
	{
		putchar((n / 10) + '0');
		putchar((n % 10) + '0');
		if (n < 99)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
