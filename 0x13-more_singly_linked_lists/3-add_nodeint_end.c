#include "lists.h"

/**
* add_nodeint_end - Adds a node at the end of a linked list
* @f: Pointer to the first element in the list
* @n: Data to insert in the new element
* Return: Pointer to the new node, or NULL, if fails
*/

listint_t *add_nodeint_end(listint_t **f, const int n)
{
	listint_t *new;
	listint_t *temp = *f;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*f == NULL)
	{
		*f = new;
		return (new);
	}
	temp = temp->next;
	temp->next = new;
	return (new);
}
