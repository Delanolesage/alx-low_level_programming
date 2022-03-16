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

	for (i = 3; i <= 100; ++i)
	{
		printf("%d", fiboSum);
		f_1 = f_2;
		f_2 = fiboSum;
		fiboSum = f_1 + f_2;
		if (i != 97)
			printf(", ");
	}
	printf("%d\n", fiboSum);
	return (0);
}
