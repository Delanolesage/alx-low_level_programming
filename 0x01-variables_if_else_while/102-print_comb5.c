#include <stdio.h>
/**
 * main - Program entry point
 *
 * Return: 0 on success. Error code otherwise
 */
int main(void)
{
	int i, j, k, l;

	i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			k = 0;
			while (k <= 9)
			{
				l = 0;
				while (l <= 9)
				{
					if (k != 0 && l != 0)
					{
						putchar(i + '0');
						putchar(j + '0');
						putchar(' ');
						putchar(k + '0');
						putchar(l + '0');
					}
					if (1 == 1)
					{
						putchar(',');
						putchar(' ');
					}
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
