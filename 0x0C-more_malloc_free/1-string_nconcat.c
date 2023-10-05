#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenate string
 * @s1: string 1
 * @s2: string 2
 * @n: Number of string
 * Return: conc string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, s1len = 0, s2len = 0;
	char *o;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		s1len++;
	for (i = 0; s2[i] != '\0'; i++)
		s2len++;
	o = malloc(sizeof(char) * (s1len + n) + 1);
	if (o == NULL)
		return (NULL);
	if (n >= s2len)
	{
		for (i = 0; s1[i] != '\0'; i++)
			o[i] = s1[i];
		for (i = 0; s2[i] != '\0'; i++)
			o[s1len + i] = s2[i];
		o[s1len + i] = '\0';
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			o[i] = s1[i];
		for (i = 0; i < n; i++)
			o[s1len + i] = s2[i];
		o[s1len + i] = '\0';
	}
	return (o);
}
