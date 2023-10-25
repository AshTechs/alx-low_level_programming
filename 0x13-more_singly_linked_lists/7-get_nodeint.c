#include "lists.h"

/**
 * get_nodeint_at_in - The node at a certain index in a linked list
 * @n: First node in the linked list
 * @in: Index of the node to return
 * Return: Pointer to the node we're looking for, or NULL
 */

listint_t *get_nodeint_at_in(listint_t *n, unsigned int in)
{
	unsigned int i = 0;
	listint_t *temp = n;

	while (temp && i < in)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}
