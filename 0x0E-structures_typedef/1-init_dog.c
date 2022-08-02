#include <stdio.h>
#include <stdlib.h>
#include "dog.h"


/**
 * init_dog - initialize variable `struct dog`
 * @d: dog struct
 * @name: name
 * @age: age
 * @owner: string for owners
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
