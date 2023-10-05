#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocate memory with malloc
 * @s: memory size
 * Return: pointer to new memory
 */

void *malloc_checked(unsigned int s)
{
	char *o = malloc(s);

	if (o == NULL)
		exit(98);
	else
		return (o);
}
