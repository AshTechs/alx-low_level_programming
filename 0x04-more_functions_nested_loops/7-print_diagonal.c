#include "main.h"

/**
 * print_diagonal - Diagonal
 * @v: Variable
 * Return: 0
 */

void print_diagonal(int v)
{
	int i, j;

	if (v <= 0)
		_putchar('\n');
	for (i = 0; i < v; i++)
	{
		for (j = 0; j < i; j++)
		{
		_putchar(' ');
		}
	_putchar('\\');
	_putchar('\n');
	}
}
