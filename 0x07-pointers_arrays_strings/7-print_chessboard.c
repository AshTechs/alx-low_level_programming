#include "main.h"

/**
 * print_chessboard - The chessboard
 * @p: pointer to print
 * Return: void
 */

void print_chessboard(char (*p)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(p[i][j]);
		}
		_putchar('\n');
	}
}
