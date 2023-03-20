#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog's owner
 * Return: new dog
 */

dog_t *new_dog(char *name, float  age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
		return (d);
	}
}
