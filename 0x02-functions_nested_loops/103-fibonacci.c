# include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0 if success.
 */
int main(void)
{
	int i;
	long int f_1 = 0;
	long int f_2 = 1;
	long int fiboSum = f_1 + f_2;
	long int stop = 4000000;

	for (i = 1; i <= 50; ++i)
	{
		printf("%ld", fiboSum);
		f_1 = f_2;
		f_2 = fiboSum;
		fiboSum = f_1 + f_2;
		if (fiboSum < stop)
			printf(", ");
		if (fiboSum >= stop)
			break;
	}
	printf("\n");
	return (0);
}
