#include "main.h"

/**
 * _strlen - Length of a string
 * @s: String
 * Return: length
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
