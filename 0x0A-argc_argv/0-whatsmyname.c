#include "main.h"
#include <stdio.h>

/**
 * main - The name of a programe
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
