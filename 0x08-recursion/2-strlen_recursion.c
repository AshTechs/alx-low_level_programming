#include "main.h"

/**
 * _strlen_recursion - Return length
 * @s: String
 * Return: Length
 */

int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s)
	{
		l++;
		l += _strlen_recursion(s + 1);
	}
	return (l);
}
