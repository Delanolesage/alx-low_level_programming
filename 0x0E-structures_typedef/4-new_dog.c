#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: pointer to the name of the dog
 * @age: the age of the dog
 * @owner: pointer to the owner's name
 *
 * Return: the created dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t dog;

	if (name != NULL && owner != NULL)
	{
		dog = init_dog(name, age, owner);
		return (dog);
	}
	else
		return (NULL);
}
