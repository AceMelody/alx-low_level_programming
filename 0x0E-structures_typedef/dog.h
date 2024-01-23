#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - structure of dog's information
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the name of the dog's owner
 *
 * Description: the structure is made up of a dog's basic information
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
