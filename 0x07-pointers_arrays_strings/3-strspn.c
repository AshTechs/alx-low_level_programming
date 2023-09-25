#include "main.h"

/**
 * _strspn - The length of a prefix
 * @s: The string
 * @p: Prefix
 * Return: The no. of bytes
 */

unsigned int _strspn(char *s, char *p)
{
	unsigned int b = 0;
	int i;

	while (*s)
	{
		for (i = 0; p[i]; i++)
		{
			if (*s == p[i])
			{
				b++;
				break;
			}
			else if (p[i] + 1 == '\0')
				return (b);
		}
		s++;
	}
	return (b);
}
