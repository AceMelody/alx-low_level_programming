#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the name of the dog's owner
 *
 * Return: the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;

	doggy = (dog_t *)malloc(sizeof(dog_t));
	doggy->name = name;
	doggy->age = age;
	doggy->owner = owner;

	return (*doggy);
}
