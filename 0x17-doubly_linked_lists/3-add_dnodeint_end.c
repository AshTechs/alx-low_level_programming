#include "lists.h"

/**
 * add_dnodeint_end - Add a new node at the end of the dlistint_t list
 * @h: A pointer to the head of the dlistint_t
 * @n: Integer for the new node to contain
 * Return: New node if successful, NULL if fails
 */

dlistint_t *add_dnodeint_end(dlistint_t **h, const int n)
{
	dlistint_t *new, *last;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*h == NULL)
	{
		new->prev = NULL;
		*h = new;
		return (new);
	}

	last = *h;
	while (last->next != NULL)
		last = last->next;
	last->next = new;
	new->prev = last;

	return (new);
}
