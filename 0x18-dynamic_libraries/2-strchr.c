#include "main.h"

/**
 * _strchr - Locate a char in string
 * @s: String
 * @c: Char
 * Return: c found NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
