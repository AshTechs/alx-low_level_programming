#include "main.h"

/**
 * _strcmp - String comparasm
 * @x: Input val1
 * @y: Input val2
 * Return: x[i] -y[i]
 */

int _strcmp(char *x, char *y)
{
	int i = 0;

	while (x[i] != '\0' && y[i] != '\0')
	{
		if (x[i] != y[i])
		{
			return (x[i] - y[i]);
		}
		i++;
	}
	return (0);
}
