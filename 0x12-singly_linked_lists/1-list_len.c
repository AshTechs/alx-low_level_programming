#include "lists.h"

/**
 * list_len - The length of the list
 * @h: Head of nodes
 * Return: Length
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
