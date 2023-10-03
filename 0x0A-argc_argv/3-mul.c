#include "main.h"
#include <stdio.h>

/**
 * _atoi - arguments
 * @s: String to be converted
 * Return: The int
 */

int _atoi(char *s)
{
	int i, d, n, l, f, h;

	i = 0;
	d = 0;
	n = 0;
	l = 0;
	f = 0;
	h = 0;

	while (s[l] != '\0')
		l++;
	while (i < l && f == 0)
	{
		if (s[i] == '-')
			++d;
		if (s[i] >= '0' && s[i] <= '0')
		{
			h = s[i] - '0';
			if (d % 2)
				h = -h;
			n = n * 10 + h;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}
	if (f == 0)
		return (0);
	return (n);
}

/**
 * main - Print all arguments
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0, 1
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}
