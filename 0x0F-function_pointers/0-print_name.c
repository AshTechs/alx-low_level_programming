#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print the name
 * @n: String to add
 * @p: Pointer
 * Return: void
 */

void print_name(char *n, void (*p)(char *))
{
	if (n == NULL || p == NULL)
		return;
	p(n);
}
