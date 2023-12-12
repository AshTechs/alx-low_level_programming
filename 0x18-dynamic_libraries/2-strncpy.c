#include "main.h"

/**
 * _strncpy - copy string
 * @i: input value
 * @s: input value
 * @n: input value
 * Return: i
 */

char *_strncpy(char *i, char *s, int n)
{
	int j;

	j = 0;
	while (j < n && s[j] != '\0')
	{
		i[j] = s[j];
		j++;
	}
	while (j < n)
	{
		i[j] = '\0';
		j++;
	}
	return (i);
}
