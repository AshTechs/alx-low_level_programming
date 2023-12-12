#include "main.h"

/**
 * _memcpy - Function that copies memory area
 * @c: Copies
 * @b: bytes frm memory
 * @a: area
 * Return: Pointer
 */

char *_memcpy(char *a, char *b, unsigned int c)
{
	unsigned int i = 0;

	while (i < c)
	{
		a[i] = b[i];
		i++;
	}

	return (a);
}
