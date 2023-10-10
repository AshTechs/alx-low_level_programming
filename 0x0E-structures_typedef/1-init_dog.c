#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - init a variable
 * @p: Pointer
 * @n: Name
 * @a: Age
 * @o: Owner
 */

void init_dog(struct dog *p, char *n, float a, char *o)
{
	if (p == NULL)
		p = malloc(sizeof(struct dog));
	p->n = n;
	p->a = a;
	p->o = o;
}
