#include "main.h"

/**
 * _strpbrk - Search a string
 * @s: String
 * @b: set byte
 * Return: set match - NULL
 */

char *_strpbrk(char *s, char *b)
{
	int i;

	while (*s)
	{
		for (i = 0; b[i]; i++)
		{
			if (*s == b[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
