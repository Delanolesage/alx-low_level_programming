#include <stdio.h>
/**
* positive_or_negative: prints if integer is positive, negative or zero
* @i: integer to check
*
* void: 0 if success
*/
void positive_or_negative(int i)
{
	/* your code goes there */
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
}
