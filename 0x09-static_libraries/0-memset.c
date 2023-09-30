#include "main.h"

/**
 * _memset - fills a block with as specific value
 * @s: Starting point
 * @d: Desired value
 * @n: number of bytes
 * Return: return value for n bytes
 */

char *_memset(char *s, char d, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = d;
		n--;
	}
	return (s);
}
