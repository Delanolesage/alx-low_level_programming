#include <stdio.h>
/**
 * main - Program entry point
 *
 * Return: 0 on success. Error code otherwise
 */
int main(void)
{
	int i, j, k;
	i = 0;
	j = i +1;
	k = j + 1;

	while (i <= 9)
	{
		while (j <= 9)
		{
			while (k <= 9)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				putchar(',');
				putchar(' ');
				k++;
			}
			j++;
		}
		
		i++;
	}
	putchar('\n');
	return (0);
}
