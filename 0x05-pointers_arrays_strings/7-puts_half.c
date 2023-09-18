#include "main.h"
/**
 * puts_half - a function that prints half
 * @i: input
 * Return: half of input
 */

void puts_half(char *i)
{
	int len = 0;

	while (*i != '\0')
	{
		len++;
		i++;
	}

	i -= (len / 2);
	while (*i != '\0')
	{
		_putchar(*i);
		i++;
	}

	_putchar('\n');
}
