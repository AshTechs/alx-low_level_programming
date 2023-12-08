#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete a node from a dlistint_t list
 * @h: Pointer to the head of the dlistint_t
 * @index: The index of the node to be deleted
 * Return: 1 if successful, -1 if fails
 */

int delete_dnodeint_at_index(dlistint_t **h, unsigned int index)
{
	dlistint_t *tmp = *h;

	if (*h == NULL)
		return (-1);
	for (; index != 0; index--)
	{
		if (tmp == NULL)
			return (-1);
		tmp = tmp->next;
	}
	if (tmp == *h)
	{
		*h = tmp->next;
		if (*h != NULL)
			(*h)->prev = NULL;
	}
	else
	{
		tmp->prev->next = tmp->next;
		if (tmp->next != NULL)
			tmp->next->prev = tmp->prev;
	}
	free(tmp);
	return (1);
}
