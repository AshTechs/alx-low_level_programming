#include "main.h"

/**
 * _strspn - Entry point
 * @a: Input value1
 * @b: Input value2
 * Return: 0
 */

unsigned int _strspn(char *a, char *b)
{
	unsigned int n = 0;
	int i;

	while (*a)
	{
		for (i = 0; b[i]; i++)
		{
			if (*a == b[i])
			{
				n++;
				break;
			}
			else if (b[i + 1] == '\0')
				return (n);
		}
		a++;
	}
	return (n);
}
