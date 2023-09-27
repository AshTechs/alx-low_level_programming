#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion -Return sqr root
 * @n: Number to calc
 * Return: resulting sqr root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - To find the natural sqr root
 * @n: Num. to calculate
 * @i: iterator
 * Return: resulting sqr root
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}

