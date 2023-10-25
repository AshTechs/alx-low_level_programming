#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node in a linked list
 * @p: Pointer to the first node in the list
 * @idx: Index where the new node is added
 * @n: Data to insert in the new node
 * Return: The new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **p, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *temp = *p;

	new = malloc(sizeof(listint_t));
	if (!new || !p)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *p;
		*p = new;
		return (new);
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
