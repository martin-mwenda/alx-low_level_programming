#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints character name
 * @d: Pointer to be printer
 *
 * return: If an element of the struct dog is NULL, the function print
 */
void print_dog(struct dog *d)
{
	if (!d->name)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	printf("Age: %f\n", d->age);
	if (!d->owner)
	{
		printf("owner: (nil)\n");
	}
	else
	{
		printf("owner: %s\n", d->owner);
	}
}
