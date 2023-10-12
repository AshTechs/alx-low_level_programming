#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings
 * @s: The string to be printed
 * @n: The number of strings
 * @...: A variable number
 * Description: If separator is NULL, it is not printed.
 * If one of the strings if NULL, (nil) is printed instead
 */

void print_strings(const char *s, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int i;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != (n - 1) && s != NULL)
			printf("%s", s);
	}

	printf("\n");

	va_end(strings);
}
