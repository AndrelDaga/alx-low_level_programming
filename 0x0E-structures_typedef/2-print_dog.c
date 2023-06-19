#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: a struct dog
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	char *n;

	n = "(nil)";
	if (d == NULL)
	{
		return;
	}
	else
	{
		d->name == NULL ? printf("Name: %s\n", n) : printf("Name: %s\n", d->name);
		d->age == 0.0 ? printf("Age: %s\n", n) : printf("Age: %f\n", d->age);
		d->owner == NULL ? printf("Owner: %s\n", n) : printf("Owner: %s\n", d->owner);
	}
}
