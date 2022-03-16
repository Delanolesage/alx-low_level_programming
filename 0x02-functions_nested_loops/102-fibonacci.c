# include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0 if success.
 */
int main(void)
{
	int i;
	int f_1 = 0;
	int f_2 = 1;
	int fiboSum = f_1 + f_2;

	printf("%d, %d, ", f_1, f_2);
	for (i = 3; i <= 98; ++i)
	{
		printf("%d, ", fiboSum);
		f_1 = f_2;
		f_2 = fiboSum;
		fiboSum = f_1 + f_2;
	}
	printf("%d\n", fiboSum);
	return (0);
}
