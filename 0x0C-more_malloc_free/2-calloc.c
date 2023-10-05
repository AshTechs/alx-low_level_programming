#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocate mem
 * @n: number of array
 * @s: size
 * Return: output
 */

void *_calloc(unsigned int n, unsigned int s)
{
char *o;

if (n == 0 || s == 0)
return (NULL);
o = calloc(n, s);
if (o == NULL)
return (NULL);
else
return (o);
}
