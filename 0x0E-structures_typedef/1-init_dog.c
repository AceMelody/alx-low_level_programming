#include "dog.h"

/**
 * init_dog - initializes struct dog
 * @d: the struct name
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the name of the dog's owner
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (*d != '\0')
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
