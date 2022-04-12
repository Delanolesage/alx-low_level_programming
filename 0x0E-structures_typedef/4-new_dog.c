#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

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
	int i, j, z;
	dog_t *newDog;

	for (i = 0; name[i] != '\0'; i++)

	for (j = 0; owner[j] != '\0'; j++)

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
	{
		free(newDog);
		return (NULL);
	}
	newDog->name = malloc(i * sizeof(newDog->name));
	if (newd->name == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	for (z = 0; z <= i; z++)
	{
		(*newDog).name[z] = name[z];
	}
	(*newDog).age = age;
	newDog->owner = malloc(j * sizeof(newDog->owner));
	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog->owner);
		free(newDog);
		return (NULL);
	}
	for (z = 0; z <= j; z++)
	{
		newDog->owner[z] = owner[z];
	}
	return (newDog);
}
