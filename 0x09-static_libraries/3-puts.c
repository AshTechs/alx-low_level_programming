#include "main.h"

/**
 * _puts - Print a string
 * @s: String
 * _putchar prints a new line
 */

void _puts(char *s)
{
	while (*s)
		_putchar(*s++);

	_putchar('\n');
}
