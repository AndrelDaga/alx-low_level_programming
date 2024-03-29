#ifndef DOG_H
#define DOG_H

/**
 * struct dog - describes a dog
 * @name: the name of a dog
 * @age: the age of the dog
 * @owner: the dog's owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
