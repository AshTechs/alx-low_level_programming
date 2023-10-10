#include <stdlib.h>
#include "dog.h"
#include <string.h>

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
		return;


	d->name = malloc(strlen(name) + 1);


	(d->name != NULL)
		strcpy(d->name, name);

	d->age = age;

	d->owner = malloc(strlen(owner) + 1);


	if (d->owner != NULL)
		strcpy(d->owner, owner);
}
