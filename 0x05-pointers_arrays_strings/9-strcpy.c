#include "main.h"

/**
 * _strcpy - copy strings
 * @d: destination
 * @s: source
 * Return: string
 */

char *_strcpy(char *d, char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	{
		*(d + len) = *(s + len);
		len++;
	}

	*(d + len) = '\0';
	return (d);
}
