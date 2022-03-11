#include <stdio.h>
/**
 * main - Program entry point
 *
 * Return: 0 on success. Error code otherwise
 */
int main(void)
{
	int n = 0;
	int i, j, k, l;

	while (n <= 999)
	{
		i = n;
		while (i < 999)
		{
			if (i / 100 % 10 > i % 10)
				break;
			k = n - ((n / 10) *10);
			j = (n - ((n / 100) * 100)) / 10;
			l = n / 100;
			i /= 100;
			if (i == 0)
			{
				if (i != j && i != k && j != k)
				{
					putchar(l + '0');
					putchar(j + '0');
					putchar(k + '0');
					if (n < 789)
					{
						putchar(',');
						putchar(' ');
					}
				}
				break;
			}
		}
		n++;
	}
	putchar('\n');
	return (0);
}
