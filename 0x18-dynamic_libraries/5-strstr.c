#include "main.h"

/**
 * _strstr - Locate substring
 * @s: String
 * @ss: Substring
 * Return: substring located - NULL
 */

char *_strstr(char *s, char *ss)
{
	int i;

	if (*ss == 0)
		return (s);

	while (*s)
	{
		i = 0;

		if (s[i] == ss[i])
		{
			do {
				if (ss[i + 1] == '\0')
					return (s);
				i++;
			} while (s[i] == ss[i]);
		}
		s++;
	}
	return ('\0');
}

