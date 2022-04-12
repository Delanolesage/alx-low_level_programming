#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: a pointer to the variable dog
 *
 * Void: nothing to return
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if ((*d).name != NULL)
			printf("Name: %s\n", (*d).name);
		else
			printf("Name: (nil)\n");
		printf("Age: %.6f\n", (*d).age);
		printf("Owner: %s", (*d).owner);
	}
}
