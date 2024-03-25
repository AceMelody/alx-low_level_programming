#include "dog.h"

/**
 * free_dog - frees dogs
 * @d: the dog
 *
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	free(d);
	*d = NULL;
}
