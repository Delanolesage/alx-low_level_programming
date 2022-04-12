#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure for the object dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 *
 * Description: create an object dog with name, age
 * and the owner's name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

#endif
