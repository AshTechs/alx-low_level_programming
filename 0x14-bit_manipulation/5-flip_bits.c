#include "main.h"

/**
 * flip_bits - Counts the number of bits to change
 * @n1: First number
 * @n2: Second number
 * Return: Number of bits to change
 */

unsigned int flip_bits(unsigned long int n1, unsigned long int n2)
{
	int i, countbit = 0;
	unsigned long int current;
	unsigned long int exclusive = n1 ^ n2;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			countbit++;
	}

	return (countbit);
}
