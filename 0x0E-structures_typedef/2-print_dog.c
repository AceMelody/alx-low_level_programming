#include "dog.h"

/**
 * print_dog - prints a struct dog variable
 * @d: the struct dog variable
 *
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (*d == '\0')
		printf("\n");
	if (d->name == '\0')
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (d->age == '\0')
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);
	if (d->owner == '\0')
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
