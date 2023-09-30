#include "main.h"

/**
 * _strncpy - Copy string
 * @x: Input val1
 * @y: Input val2
 * @n: Input val3
 * Return: x
 */

char *_strncpy(char *x, char *y, int n)
{
	int a = 0;

	while (a < n && y[a] != '\0')
	{
		x[a] = y[a];
		a++;
	}
	while (a < n)
	{
		x[a] = '\0';
		a++;
	}
	return (x);
}
