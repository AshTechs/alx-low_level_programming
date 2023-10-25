#include "lists.h"

/**
 * free_listint - Frees a linked list
 * @l: Listint_t list to be freed
 */

void free_listint(listint_t *l)
{
	listint_t *temp;

	while (l)
	{
		temp = l->next;
		free(l);
		l = temp;
	}
}
