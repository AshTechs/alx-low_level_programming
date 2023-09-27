#include "main.h"

int check_pal(char *s, int i, int l);
int _strlen_recursion(char *s);

/**
 * is_palindrome - check palindrome
 * @s: String to reverse
 * Return: 1 if it is, 0 if it's not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - Return length
 * @s: String
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - Check char for palindrome
 * @s: String
 * @i:iterator
 * @l: length
 * Return: 1 if palindrome, 0 if not
 */

int check_pal(char *s, int i, int l)
{
	if (*(s + i) != *(s + l - 1))
		return (0);
	if (i >= l)
		return (1);
	return (check_pal(s, i + 1, l - 1));
}
