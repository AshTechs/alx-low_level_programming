#include "main.h"

/**
 * _memset - Function that fills memory
 * @s: Memory area
 * @c: Copy
 * @n: Number of times
 * Return: Pointer to memory
 */

char *_memset(char *s, char c, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = c;
	}
	return (s);
}
