#include "main.h"

/**
 * _strcpy - Copy string
 * @x: copy to
 * @y: Copy from
 * Return: String value
 */

char *_strcpy(char *x, char *y)
{
	int a = 0;
	int b = 0;

	while (*(y + a) != '\0')
	{
		a++;
	}
	for (; b < a ; b++)
	{
		x[b] = y[b];
	}
	x[a] = '\0';
	return (x);
}
