#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: Pointer to the struct dog to initialize.
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: on sucess 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age  = age;
		d->owner = owner;
	}
}
