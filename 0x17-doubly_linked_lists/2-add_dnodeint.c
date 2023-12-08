#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list
 * @h: A pointer to the head of the dlistint_t list
 * @n: Integer for the new node to contain
 * Return: New node if successful, if not, NULL
 */

dlistint_t *add_dnodeint(dlistint_t **h, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *h;
	if (*h != NULL)
		(*h)->prev = new;
	*h = new;
	return (new);
}
