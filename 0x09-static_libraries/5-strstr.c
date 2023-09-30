#include "main.h"

/**
 * _strstr - Entry point
 * @x: input1
 * @y: input2
 * Return: 0
 */

char *_strstr(char *x, char *y)
{
	for (; *x != '\0'; x++)
	{
		while (*x == *y && *y != '\0')
		{
			x++;
			y++;
		}
		if (*y == '\0')
			return (x);
	}
	return (0);
}
