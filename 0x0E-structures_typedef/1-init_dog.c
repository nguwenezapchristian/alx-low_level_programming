#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog -  initialize a variable of type struct dog
 * @d: variable of type struct dog
 * @name: dog name
 * @age: dog age
 * @owner: dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		exit(1);
	}
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
