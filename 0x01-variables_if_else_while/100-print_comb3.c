#include <stdio.h>
/**
 * main - Program entry point
 *
 * Return: 0 on success. Error code otherwise
 */
int main(void)
{
	int n = 0;
	int i, a;

	while (n <= 99)
	{
		i = n;
		while (1)
		{
			if (i / 10 % 10 > i % 10)
				break;
			a = i / 10;
			if (a == 0)
			{
				putchar((n / 10) + '0');
				putchar((n % 10) + '0');
				break;
			}
		}
		n++;
	}
	putchar('\n');
	return (0);
}
