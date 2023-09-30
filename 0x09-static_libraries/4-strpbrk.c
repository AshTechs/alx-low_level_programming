#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: input1
 * @a: input2
 * Return: 0
 */

char *_strpbrk(char *s, char *a)
{
	int b;

	while (*s)
	{
		for (b = 0; a[b]; b++)
		{
			if (*s == a[b])
				return (s);
		}
		s++;
	}
	return ('\0');
}
