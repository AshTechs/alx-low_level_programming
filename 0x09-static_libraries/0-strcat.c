#include "main.h"

/**
 * _strcat - fxn that concarnate 2 strings
 * @x: Entered value
 * @y: Entered value2
 * Return: void
 */

char *_strcat(char *x, char *y)
{
	int a;
	int b;

	a = 0;
	while (x[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (y[b] != '\0')
	{
		x[a] = y[b];
		a++;
		b++;
	}
	x[a] = '\0';
	return (x);
}
