#include "main.h"
/**
 * puts2 - Print 1 char
 * @i: input
 * Return: Print
 */

void puts2(char *i)
{
	int longi = 0;
	int t = 0;
	char *y = i;
	int o;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	t = longi - 1;
	for (o = 0; o <= t; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(i[o]);
		}
	}
	_putchar('\n');
}
