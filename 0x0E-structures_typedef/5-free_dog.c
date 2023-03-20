#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free allocated memory
 * @d: pointer variable of type struct dog
 */

void free_dog(dog_t *d)
{
	free(d);
}
