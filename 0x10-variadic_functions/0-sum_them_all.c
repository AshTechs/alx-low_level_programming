#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - The sum of all its paramters.
 * @n: Number of paramters
 * @...: A variable number to calculate the sum of.
 *
 * Return: n == 0 - 0, if not, the sum of all parameters.
 */


int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int x, sum = 0;

	va_start(a, n);

	for (x = 0; x < n; x++)
		sum += va_arg(a, int);

	va_end(a);

	return (sum);
}
