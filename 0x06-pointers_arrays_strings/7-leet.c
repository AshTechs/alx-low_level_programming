#include "main.h"

/**
 * leet - encode a string into 1337
 * @n: input value
 * Return: n value
 */

char *leet(char *n)
{
	int i, j;
	char x[] = "aAeEoOtTlL";
	char y[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == x[j])
			{
				n[i] = y[j];
			}
		}
	}
	return (n);
}
