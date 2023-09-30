#include "main.h"

/**
 * _strncat - Concartenate 2 strings
 * @x: Entered val1
 * @y: Entered val2
 * @z: Entered val3
 * Return: x
 */

char *_strncat(char *x, char *y, int z)
{
	int a;
	int b;

	a = 0;
	while (x[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < z && y[b] != '\0')
	{
		x[a] = y[b];
		a++;
		b++;
	}
	x[a] = '\0';
	return (x);
}
