#include "main.h"

/**
 * _atoi - Convert a string
 * @s: String
 * Return: Integer
 */

int _atoi(char *s)
{
	int a = 1, b = 0;
	unsigned int u = 0;

	while (!(s[b] <= '9' && s[b] >= '0') && s[b] != '\0')
	{
		if (s[b] == '-')
			a *= -1;
		b++;
	}
	while (s[b] <= '9' && (s[b] >= '0' && s[b] != '\0'))
	{
		u = (u * 10) + (s[b] - '0');
		b++;
	}
	u *= a;
	return (u);
}
