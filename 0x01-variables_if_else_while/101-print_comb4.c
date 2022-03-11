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
	i = 0;
	j = i +1;
	k = j + 1;

	while (i <= 9)
	{
		while (j <= 9)
		{
			while (k <= 9)
			{
				k = n - ((n / 10) *10);
				j = (n - ((n / 100) * 100)) / 10;
				l = n / 100;
				putchar(l + '0');
				putchar(j + '0');
				putchar(k + '0');
				k++;
			}
			j++;
		}
		
		i++;
	}
	putchar('\n');
	return (0);
}
