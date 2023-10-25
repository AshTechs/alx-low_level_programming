#include "lists.h"

/**
 * free_listint2 - Frees a linked list
 * @p: Pointer to the listint_t list to be freed
 */

void free_listint2(listint_t **p)
{
	listint_t *temp;

	if (p == NULL)
		return;
	while (*p)
	{
		temp = (*p)->next;
		free(*p);
		*p = temp;
	}
	*p = NULL;
}
