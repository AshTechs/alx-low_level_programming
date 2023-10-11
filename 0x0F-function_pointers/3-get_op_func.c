#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - The correct function to perform
 * @s: The operator
 * Return: Pointer
 */

int (*get_op_func(char *s))(int, int)
{
	p_t ops[] = {
		{"+", p_add},
		{"-", p_sub},
		{"*", p_mul},
		{"/", p_div},
		{"%", p_mod},
		{NULL, NULL},
	};
}
