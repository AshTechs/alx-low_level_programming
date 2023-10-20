#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a list
 * @h: Head of the link
 * Return: void
 */

void free_list(list_t *h)
{
	list_t *current_node;

	while ((current_node = h) != NULL)
	{
		h = h->next;
		free(current_node->str);
		free(current_node);
	}
}
