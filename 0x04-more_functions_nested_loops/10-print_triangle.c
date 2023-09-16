#include "main.h"

/**
 * print_triangle - Triangle
 * @s: size
 * Return: void
 */

void print_triangle(int s)
{
	int r, h, c;

	if (s <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (r = 1; r <= s; r++)
		{
			for (c = s - r; c >= 1; c--)
			{
				_putchar(' ');
			}
			for (h = 1; h <= r; h++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
