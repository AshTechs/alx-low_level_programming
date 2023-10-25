#include "lists.h"

/**
 * reverse_listint - Reverses a linked list
 * @l: Pointer to the first node in the list
 * Return: Pointer to the first node in the new list
 */

listint_t *reverse_listint(listint_t **l)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*l)
	{
		next = (*l)->next;
		(*l)->next = prev;
		prev = *l;
		*l = next;
	}
	*l = prev;
	return (*l);
}
