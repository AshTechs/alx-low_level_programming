#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - This prog sets the value of a bit to 0 at a given index
 * @p: Parameter
 * @index: Index
 * Return: 1 if success, -1 if not
 */

int clear_bit(unsigned long int *p, unsigned int index)
{
	if (index > sizeof(p) * 8)
		return (-1);
	*p &= ~(1 << index);
	return (1);
}
