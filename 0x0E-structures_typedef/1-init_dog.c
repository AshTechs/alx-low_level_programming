#include <stdlib.h>
#include "dog.h"
#include <string.h> // For strcpy

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
		return; /**Handle the case of a NULL pointer gracefully*/

    /*Allocate memory for name and owner strings and copy the data*/
	d->name = malloc(strlen(name) + 1); /*+1 for the null terminator
    if*/
	(d->name != NULL)
		strcpy(d->name, name);

	d->age = age;

	d->owner = malloc(strlen(owner) + 1); /** +1 for the null terminator*/
	if (d->owner != NULL)
		strcpy(d->owner, owner);
}
