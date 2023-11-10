#ifndef DOG
#define DOG

/**
 * struct dog - has the attributes of a dog
 * @name: the dog's name
 * @age: age of the dog
 * @owner: name of the person who owns the dog
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

#endif /* DOG */
