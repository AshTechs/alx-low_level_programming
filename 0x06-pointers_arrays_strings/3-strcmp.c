#include "main.h"

/**
 * _strcmp - Compare 2 strings
 * @a: input value
 * @b: input value
 * Return: a[i] -b[i]
 */

int _strcmp(char *a, char *b)
{
	int i;

	i = 0;
	while (a[i] != '\0' && b[i] != '\0')
	{
		if (a[i] != b[i])
		{
			return (a[i] - b[i]);
		}
		i++;
	}
	return (0);
}
