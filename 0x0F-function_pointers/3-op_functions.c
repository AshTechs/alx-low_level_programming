#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - The sum of two numbers
 * @a: The first number
 * @b: The second number
 * Return: Sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - The subtraction of two numbers
 * @a: The first number
 * @b: The second number
 * Return: Subtraction of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - The multiplication of two numbers
 * @a: The first number
 * @b: The second number
 * Return: Multiplication of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - The division of two numbers
 * @a: The first number
 * @b: The second number
 * Return: Division of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - The modulus of two numbers
 * @a: The first number
 * @b: The second number
 * Return: Modulus of a and b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
