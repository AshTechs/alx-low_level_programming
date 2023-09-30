#include "main.h"

/**
 * _memcpy - cpy memory
 * @x: Memory stored
 * @y: Memory copied
 * @n: Number of bytes
 * Return: copied memory
 */

char *_memcpy(char *x, char *y, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		x[a] = y[a];
		n--;
	}
	return (x);
}
