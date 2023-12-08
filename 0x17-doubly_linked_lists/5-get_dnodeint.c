#include "lists.h"

/**
 * get_dnodeint_at_index - Locate a node in a dlistint_t list
 * @h: Head of the dlistint_t list
 * @index: The node to locate
 * Return: Head if successful, NULL if not
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *h, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (h == NULL)
			return (NULL);
		h = h->next;
	}
	return (h);
}
