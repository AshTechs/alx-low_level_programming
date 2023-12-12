# include "main.h"

/**
 * _strncat - concatenate two strings
 * @i: input value
 * @s: input value
 * @n: input value
 * Return: i
 */

char *_strncat(char *i, char *s, int n)
{
	int a;
	int b;

	a = 0;
	while (i[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && s[b] != '\0')
	{
		i[a] = s[b];
		a++;
		b++;
	}
	i[a] = '\0';
	return (i);
}
