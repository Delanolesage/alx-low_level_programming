#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs
 * @d: the dog
 *
 * Void: nothing to return
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		if ((*d).name)
			free((*d).name);
		if ((*d).owner)
			free((*d).owner;
		free(d);
	}
}
