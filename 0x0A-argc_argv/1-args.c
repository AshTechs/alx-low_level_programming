#include "main.h"
#include <stdio.h>

/**
 * main - Print the number of arguments
 * @argc: Number of arguments
 * @argv: Array of argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
