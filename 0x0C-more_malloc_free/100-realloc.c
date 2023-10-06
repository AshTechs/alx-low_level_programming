#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocate a memory block
 * @p: Pointer
 * @o: Old size
 * @n: New size
 * Return: void
 */

void *_realloc(void *p, unsigned int o, unsigned int n)
{
	char *m;
	unsigned int i;

	if (n == o)
		return (p);
	if (p == NULL)
	{
		m = malloc(n);
		if (m == NULL)
			return (NULL);
		return (m);
	}
	else
	{
		if (n == 0)
		{
			free(p);
			return (NULL);
		}
	}
	m = malloc(n);
	if (m == NULL)
		return (NULL);
	for (i = 0; i < o && i < n; i++)
	{
		m[i] = ((char *) p)[i];
	}
	free(p);
	return (m);
}
