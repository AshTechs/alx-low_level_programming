#include "main.h"
/**
 * _islower - Look for lowercases
 * Return: 1 success or 0 otherwise
 * @c: The char to be chckd
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
