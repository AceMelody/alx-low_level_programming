#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 *
 * Return: struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t newdog;

	newdog.name = name;
	newdog.age = age;
	newdog.owner = owner;

	return (newdog);
}
