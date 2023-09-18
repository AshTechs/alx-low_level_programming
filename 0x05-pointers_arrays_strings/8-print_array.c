#include "main.h"
#include <stdio.h>

/**
 * print_array - print n array
 * @a: array
 * @n: num of value
 */

void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		printf("%d", a[t]);
		if (t != n - 1)
			printf(", ");
	}

	printf("\n");
}
