#include "main.h"

/**
 * cap_string - capitalize all words
 * @r: string
 * Return: Pointer
 */

char *cap_string(char *r)
{
	int index = 0;

	while (r[index])
	{
		while (!(r[index] >= 'a' && r[index] <= 'z'))
			index++;

		if (r[index - 1] == ' ' ||
		r[index - 1] == '\t' ||
		r[index - 1] == '\n' ||
		r[index - 1] == ',' ||
		r[index - 1] == ';' ||
		r[index - 1] == '.' ||
		r[index - 1] == '!' ||
		r[index - 1] == '?' ||
		r[index - 1] == '"' ||
		r[index - 1] == '(' ||
		r[index - 1] == ')' ||
		r[index - 1] == '{' ||
		r[index - 1] == '}' ||
		index == 0)
			r[index] -= 32;
		index++;
	}
	return (r);
}
