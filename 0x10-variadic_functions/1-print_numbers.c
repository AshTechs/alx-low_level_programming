#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers with a new line.
 * @s: The string to be printed
 * @n: The number of integers
 * @...: A variable number
 */
void print_numbers(const char *s, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num, int));

		if (i != (n - 1) && s != NULL)
			printf("%s", s);
	}

	printf("\n");

	va_end(num);
}
