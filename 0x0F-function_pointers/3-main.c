#include "function_pointers"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Print the result of simple operations
 * @argc: Number of arguments
 * @argv: Array of pointers
 * Return: 0
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1, num2;
	char *p;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[i]);
	p = argv[2];
	num2 = atoi(argv[3]);

	if (get_p_func(p) == NULL || p[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*p == '/' && num2 == 0) ||
			(*p == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_p_func(p)(num1, num2));
	return (0);
}
