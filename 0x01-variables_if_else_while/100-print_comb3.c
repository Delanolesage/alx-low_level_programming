#include <stdio.h>
/**
 * main - Program entry point
 *
 * Return: 0 on success. Error code otherwise
 */
int main(void)
{
	int n = 0;
	int i;

	while (n < 100)
	{
		i = n;
		while (1)
		{
			if (i / 10 % 10 > i % 10)
				break;
			if ((i /= 10) == 0)
			{
				putchar((n / 10) + '0');
				putchar((n % 10) + '0');
				break;
			}
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
