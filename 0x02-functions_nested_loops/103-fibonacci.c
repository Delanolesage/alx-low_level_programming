# include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0 if success.
 */
int main(void)
{
	int i;
	long int f_1 = 1;
	long int f_2 = 2;
	long int fiboSum = f_1 + f_2;
	long int stop = 4000000;
	int total = 0;

	for (i = 1; i <= 50; i++)
	{
		while (total < stop)
		{
			f_1 = f_2;
			f_2 = fiboSum;
			fiboSum = f_1 + f_2;
			total += fiboSum;
		}
	}
	printf("%d\n", total);
	return (0);
}
