#include "3-calc.h"

int p_add(int a, int b);
int p_sub(int a, int b);
int p_mul(int a, int b);
int p_div(int a, int b);
int p_mod(int a, int b);

/**
 * p_add - The sum of two numbers
 * @a: The first number
 * @b: The second number
 * Return: Sum of a and b
 */

int p_add(int a, int b)
{
	return (a + b);
}

/**
 * p_sub - The subtraction of two numbers
 * @a: The first number
 * @b: The second number
 * Return: Subtraction of a and b
 */

int p_sub(int a, int b)
{
	return (a - b);
}

/**
 * p_mul - The multiplication of two numbers
 * @a: The first number
 * @b: The second number
 * Return: Multiplication of a and b
 */

int p_mul(int a, int b)
{
	return (a * b);
}

/**
 * p_div - The division of two numbers
 * @a: The first number
 * @b: The second number
 * Return: Division of a and b
 */

int p_div(int a, int b)
{
	return (a / b);
}

/**
 * p_mod - The modulus of two numbers
 * @a: The first number
 * @b: The second number
 * Return: Modulus of a and b
 */

int p_mod(int a, int b)
{
	return (a % b);
}
