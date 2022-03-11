#include <stdio.h>
/**
 * main - Program entry point
 *
 * Return: 0 on success. Error code otherwise
 */
int main(void)
{
  long int a = 12;
  long long int b = 120;
  float c = 1.2;
	printf("Size of a char: %lu byte(s)\n", sizeof('A'));
  printf("Size of an int: %lu byte(s)\n", sizeof(1));
  printf("Size of a long int: %lu byte(s)\n", sizeof(a));
  printf("Size of a long long int: %lu byte(s)\n", sizeof(b));
  printf("Size of a float: %lu byte(s)", sizeof(c));
	return (0);
}
