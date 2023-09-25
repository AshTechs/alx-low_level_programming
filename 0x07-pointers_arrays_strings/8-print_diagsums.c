#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - The 2 diagonals of a square
 * @m: Matrix
 * @z: size
 */

void print_diagsums(int *m, int z)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < z; i++)
	{
		sum1 += m[i];
		m += z;
	}

	m -= z;
	for (i = 0; i < z; i++)
	{
		sum2 += m[i];
		m -= z;
	}
	printf("%d, %d\n", sum1, sum2);
}
