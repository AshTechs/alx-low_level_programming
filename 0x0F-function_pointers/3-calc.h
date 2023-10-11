#ifndef CALC_H
#define CALC_H

/**
 * struct op - A struct op
 * @p: The operator
 * @f: The function
 */

typedef struct op
{
	char *p;
	int (*f)(int a, int b);
} p_t;

int p_add(int a, int b);
int p_sub(int a, int b);
int p_mul(int a, int b);
int p_div(int a, int b);
int p_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
