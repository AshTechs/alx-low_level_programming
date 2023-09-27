#include "main.h"

/**
 * factorial - The factorial of a num.
 * @n: Number
 * Return: Factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
