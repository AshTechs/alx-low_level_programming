#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - init a variable
 * @d: Pointer
 * @name: Name
 * @age: Age
 * @owner: Owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
