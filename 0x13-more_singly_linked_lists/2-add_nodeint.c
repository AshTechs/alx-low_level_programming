#include "lists.h"

/**
* add_nodeint - Adds a new node at the beginning of a linked list
* @p: Pointer to the first node in the list
* @n: Data to insert in that new node
* Return: New node, or NULL if fails
*/

listint_t *add_nodeint(listint_t **p, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *p;
	*p = new;
	return (new);
}
