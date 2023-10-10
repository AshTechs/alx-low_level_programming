#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for a struct dog
 * @d: struct dog to free
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		/** 
		 * Free the dynamically allocated name and owner strings
		 */
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
        /**
	 * Free the struct dog itself
	 */
		free(d);
	}
}
