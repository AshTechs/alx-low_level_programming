#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - Create array
 * @s: Size
 * @c: Char to assign
 * Return: pointer to array, NULL if fail
 */

char *create_array(unsigned int s, char c)
{
	char *m;
	unsigned int i;

	m = malloc(sizeof(char) * s);
	if (s == 0 || m == NULL)
		return (NULL);
	for (i = 0; i < s; i++)
		m[i] = c;
	return (m);
}
