#include "main.h"

/**
 * _strcat - concatenates 2 strings
 * @i: input value
 * @src: source
 * Return: void
 */

char *_strcat(char *i, char *src)
{
	int a;
	int j;


	a = 0;
	while (i[a] != '\0')
	{
		a++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		i[a] = src[j];
		a++;
		j++;
	}
	i[a] = '\0';
	return (i);
}
