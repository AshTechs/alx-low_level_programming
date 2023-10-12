#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - The sum of all its paramters.
 * @n: The number of paramters.
 * @...: A variable number.
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int c, sum = 0;

	va_start(ap, n);

	for (c = 0; c < n; c++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
