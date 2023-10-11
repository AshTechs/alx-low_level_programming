#include "function_pointers.h"
#include "stdio.h"

/**
 * array_iterator - print array on a new line
 * @ar: Array
 * @n: Number to be printed
 * @p: Pointer to print
 * Return: void
 */

void array_iterator(int *ar, size_t n, void (*p)(int))
{
	unsigned int i;

	if (ar == NULL || p == NULL)
		return;
	for (i = 0; i < n; i++)
	{
		p(ar[i]);
	}
}
