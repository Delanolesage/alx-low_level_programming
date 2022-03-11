#include <stdio.h>
/**
 * main - Program entry point
 *
 * Return: 0 on success. Error code otherwise
 */
int main(void)
{
	int n = 0;
	int i, j, k;

	while (n <= 999)
	{
		i = n;
		while (i < 999)
		{
			if (i / 100 % 10 > i % 10)
				break;
			j = (n - ((n / 100) * 100)) / 10; // 8 pour 987
			k = n - ((n / 10) *10); // 7 pour 987
			i /= 100; // 9 pour 987
			if (i == 0)
			{
				if (i != j && i != k && j != k)
				{
					putchar((n / 100) + '0');
					putchar((n / 10) + '0');
					putchar((n % 10) + '0');
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
