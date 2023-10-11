#include "functions_pointers.h"


/**
 * int_index - Return index place
 * @a: Array
 * @s: Size of elements
 * @p: Pointer to the function
 * Return: void
 */

int int_index(int *a, int s, int (*p)(int))
{
	int i;

	if (a == NULL || s <= 0 || p == NULL)
		return (-1);
	for (i = 0; i < s; i++)
	{
		if (p(a[i]))
			return (i);
	}
	return (-1);
}
