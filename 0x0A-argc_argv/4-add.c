#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check string
 * @s: string
 * Return: 0
 */

int check_num(char *s)
{
	unsigned int i;

	i = 0;
	while (i < strlen(s))
	{
		if (!isdigit(s[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/**
 * main - Add positive numbers
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	int s;
	int x;

	i = 1;
	while (i < argc)
	{
		if (check_num(argv[i]))
		{
			s = atoi(argv[i]);
			x += s;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", x);
	return (0);
}
